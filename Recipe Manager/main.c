#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "Getnames.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{

	PNODE stack = NULL; 
	char* RecipeName = 0;
	//function returns users inputted name
	RecipeName = getstring(RecipeName); 

	pushitem(&stack, RecipeName);	
	popitem(&stack, RecipeName); 
	displaystack(stack); 

	free(RecipeName);

	return 0;
}

