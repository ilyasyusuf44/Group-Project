#pragma once

typedef struct recipe {

	char* recipename;
	char* ingredients;
	char* utensils;
	char* cookingtimes;
	char* temperatures;
	char* instructions;

}RECIPE;

RECIPE createrecipe();
RECIPE changestring(RECIPE);  
void printmenu(); 
int getmenuchoice();
