#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAXNAMELENGTH 50 
#include <stdio.h>
#include <stdlib.h>

//function gets the name of the recipe
char* getstring()
{
	//Prompts user to input a string
	printf("enter a name\n");

	//allocation of memory to string that holds the recipe name
	char* allocatedstring = 0;
	allocatedstring = (char*)malloc(MAXNAMELENGTH);

	//checks of allocation was successful
	if (allocatedstring)
	{
		if (scanf("%s", allocatedstring) != 1)
		{
			fprintf(stderr, "invalid input!\n");
			exit(1);
		}	
	}
	else if (allocatedstring)
	{
		fprintf(stderr, "error allocating memory!\n");
		exit(1);
	}
	return allocatedstring;
}