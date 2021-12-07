#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "Stack.h"
#include "Getnames.h"
#include "Recipe Manager Functions.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{

	PNODE stack = NULL; 
	char* RecipeName = 0;
	int menuchoice = 0;
	bool continueprogram = true; 
	//function returns users inputted name
	RecipeName = getstring(RecipeName);
	
	while (continueprogram)
	{
		printmenu();
		menuchoice = getmenuchoice(); 
		switch (menuchoice)
		{
		case 1: //change name or input name if popped
			RecipeName = getstring(RecipeName);
			break;
		case 2://add recipe
			pushitem(&stack, RecipeName);
			break;
		case 3: // remove recipe
			//needs to use close of name to not lose it
			popitem(&stack, RecipeName);
			break;
		case 4://display recipes (this is for testing purposes to check the stack, this will be replaced with the proper version later)
			displaystack(stack);
			break;
		case 5://search for recipe
			//return 0;
			break;
		case 6://quit
			if (stack) 
			{
				free(RecipeName); 
				continueprogram = false;
			}
			else
			{
				continueprogram = false; 
			}

			break;
		default://jumps out if input is invalid 
			//fprintf(stderr, "invalid!\n\n");
			if (stack)
			{
				free(RecipeName);
				continueprogram = false;
			}
			else
			{
				continueprogram = false; 
			}
			
			break;
		}

	}
	return 0;
}

