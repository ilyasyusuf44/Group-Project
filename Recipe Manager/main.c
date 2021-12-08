#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "Stack.h"
#include "NODE.h"
#include "ITEM.h"
#include "Getnames.h"
#include "Recipe Manager Functions.h"

#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int menuchoice = 0; 
	bool continueprogram = true; 
	RECIPE recipe = { 0 };
	ITEM listitem = { 0 };
	recipe = createrecipe();  
	listitem = CreateItem(recipe); 
	DisplayItem(listitem);

	//stack is last in first out btw
	LIST recipelist = CreateList(); 

	while (continueprogram)
	{
		printmenu();
		menuchoice = getmenuchoice(); 

		//feel free to add other cases if you need to
		switch (menuchoice)
		{
		case 1: //change item information

			//printf("option %d\n", menuchoice);
			recipe = changestring(recipe); 
			printf("\n");
			DisplayItem(listitem); 
			break;

		case 2://add recipe to stack

			printf("option %d\n\n", menuchoice);
			pushitem(&recipelist, listitem);
			pushitem(&recipelist, listitem);
			break;

		case 3: // remove recipe from stack

			printf("option %d\n\n", menuchoice);
			//for now this only removes from the top of the stack because the stack never goes beyond 1 item for now.
			popitem(&recipelist, listitem); 
			break;

		case 4://display recipes (this is for testing purposes to check the stack, replace this with your version)

			printf("option %d\n\n", menuchoice);
			displaystack(recipelist); 
			break;

		case 5://search for recipe, this does not work yet so ignore it

			printf("option %d\n\n", menuchoice);
			break;

		case 6://exit the loop

			printf("option %d\n\n", menuchoice);
			continueprogram = false;
			break;

		default://jumps out of loop if input is invalid 

			continueprogram = false;
			break;
		}
	}
	//emptys the stack
	disposestack(&recipelist); 
	return 0;
}

