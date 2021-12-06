#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include "Stack.h"
void pushitem(PNODE* stack, char* newstring)
{
	//allocates memory to node
	PNODE new_node = NULL;
	new_node = (PNODE)malloc(sizeof(NODE));
	if (!new_node)
	{
		fprintf(stderr, "error\n");
		exit(1);  
	}
	//the information of the current node is set to user input
	else if (new_node)
	{
		new_node->string = newstring;
		//new_node-next points to the previous node 
		new_node->next = *stack;
		//the stack becomes the current node
		*stack = new_node;
	}
}


//Function removes item from top of stack
void popitem(PNODE* stack)
{

	PNODE new_node = NULL;
	//checks to see if stack is empty, only pops items when stack is populated
	if (!*stack)
	{
		fprintf(stderr, "empty stack!\n");
		exit(1);
	}
	else if (*stack)
	{
		//the current node becomes the whole stack
		new_node = *stack;
		//the whole stack becomes the portion after the current node 
		*stack = (*stack)->next;
		//the current node is removed from memory
		free(new_node);
	}
}


//Function displays stack from top to bottom of stack
void displaystack(PNODE stack)
{

	PNODE current = stack;
	if (!current)
	{
		//could be wrong?
		fprintf(stderr, "empty stack!\n");
		exit(1);
	}
	else if (current)
	{
		do
		{
			printf("%s ", current->string);
			current = current->next;

		} while (current != NULL);
		printf("\n");
	}

}