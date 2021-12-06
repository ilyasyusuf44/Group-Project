#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "Getnames.h"
#define _CRT_SECURE_NO_WARNINGS

int main()
{

	PNODE stack = NULL;
	char* RecipeName = 0;
	RecipeName = getstring(RecipeName); 
	printf("%s", RecipeName); 




	free(RecipeName);  
	return 0;
}

