#pragma once

typedef struct node {

	int recipeindex; 
	char* string;
	struct node* next;

}NODE, * PNODE;

void pushitem(PNODE*, char*);
void popitem(PNODE*);
void displaystack(PNODE);