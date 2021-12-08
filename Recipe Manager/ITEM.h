#pragma once
#include "Recipe Manager Functions.h"
#include <stdbool.h>

typedef struct item {

	RECIPE recipe;

}ITEM, *PITEM;

ITEM CreateItem(RECIPE); 

bool CompareItems(ITEM, ITEM);

ITEM CopyItem(ITEM); 

void DisplayItem(ITEM);

void DisposeItem(ITEM);
