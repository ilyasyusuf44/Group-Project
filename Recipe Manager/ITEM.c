#pragma once
#include "ITEM.h"
#include "Recipe Manager Functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//function creates item using a given recipe
ITEM CreateItem(RECIPE userrecipe)
{
	ITEM item;
	item.recipe = userrecipe;
	return item;
}
//function copys an item. I didn't use it but I made it anyway in case you need it
ITEM CopyItem(ITEM item)
{
	ITEM copy;
	copy.recipe = item.recipe;
	
	return copy;
}
//checks if two items are the same. Returns true if it is, else returns false
bool CompareItems(ITEM itemA, ITEM itemB)
{
	if ((itemA.recipe.recipename) == (itemB.recipe.recipename))
		return true;
	else
		return false;
}

// displays a given item information. I only ever used this for testing purposes
void DisplayItem(ITEM item)
{
	printf("item data: %s\n", item.recipe.recipename);
	printf("item data: %s\n", item.recipe.ingredients);
	printf("item data: %s\n", item.recipe.utensils);
	printf("item data: %s\n", item.recipe.cookingtimes);
	printf("item data: %s\n", item.recipe.temparutures);
	printf("item data: %s\n", item.recipe.instructions);
}

//function deletes an item's information.
void DisposeItem(ITEM item)
{

	free(item.recipe.recipename);
	free(item.recipe.ingredients);
	free(item.recipe.utensils);
	free(item.recipe.cookingtimes); 
	free(item.recipe.temparutures);
	free(item.recipe.instructions); 	

}

