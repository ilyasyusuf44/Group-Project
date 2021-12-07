#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void printmenu()
{
	printf("To choose a function, enter its letter label:\n\n");
	printf("1) Enter new name\n");
	printf("2) Add recipe name to recipe book\n");
	printf("3) remove recipe name from recipe book\n");
	printf("4) display recipe names in recipe book\n");
	printf("5) search for recipe name in recipe book\n");
	printf("6) Quit\n");
}
int getmenuchoice()
{
	int choice = 0;
	if (scanf("%d", &choice) != 1)
	{
		fprintf(stderr, "invalid input!\n\n");
	}
	else
	{
		return choice;
	}
}