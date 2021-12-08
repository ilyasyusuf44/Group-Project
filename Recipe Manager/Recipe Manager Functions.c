#pragma once
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "Getnames.h"
#include "Recipe Manager Functions.h"

//function to print menu options
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

//function to get choice from menu
int getmenuchoice()
{
	int choice = 0;
	if (scanf("%d", &choice) != 1)
	{
		fprintf(stderr, "invalid input!\n\n");
		return 0;
	}
	else
	{
		return choice;
	}
}

//Function gets the user to enter the information of a recipe. This function also allocates memory
RECIPE createrecipe()
{
	RECIPE newrecipe = { 0 };
	printf("Enter recipe name\n");
	newrecipe.recipename = getstring();
	printf("Enter ingredients\n");
	newrecipe.ingredients = getstring();
	printf("Enter utensils\n");
	newrecipe.utensils = getstring();
	printf("Enter cooking times\n");
	newrecipe.cookingtimes = getstring();
	printf("Enter temperatures\n");
	newrecipe.temparutures = getstring();
	printf("Enter instructions\n");
	newrecipe.instructions = getstring();
	
	return newrecipe; 
}

//function changes the information of a recipe.
RECIPE changestring(RECIPE recipetobechanged)
{
	//for some reason fgets is returning \n and this fgets gets rid of it somehow
	fgets(recipetobechanged.recipename, MAXNAMELENGTH, stdin);

	//these fgets do what theyre supposed to
	printf("Enter recipe name\n");
	fgets(recipetobechanged.recipename, MAXNAMELENGTH, stdin);
	printf("Enter ingredients\n");
	fgets(recipetobechanged.ingredients, MAXNAMELENGTH, stdin);
	printf("Enter utensils\n");
	fgets(recipetobechanged.utensils, MAXNAMELENGTH, stdin);
	printf("Enter cooking times\n");
	fgets(recipetobechanged.cookingtimes, MAXNAMELENGTH, stdin);
	printf("Enter temperatures\n");
	fgets(recipetobechanged.temparutures, MAXNAMELENGTH, stdin);
	printf("Enter instructions\n");
	fgets(recipetobechanged.instructions, MAXNAMELENGTH, stdin);

	return recipetobechanged;
}