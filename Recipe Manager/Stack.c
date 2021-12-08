#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define MAXNAMELENGTH 50 

#include "Stack.h"
#include "NODE.h"
#include "ITEM.h"
#include<stdio.h>
#include<stdlib.h>
#include <string.h>


LIST CreateList()
{
	LIST newlist = { 0 };
	return newlist;
}
//function adds item to top of stack
void pushitem(PLIST thisList, ITEM thisItem )
{
	PNODE newNode = CreateNode(thisItem);

	if (thisList->list == NULL)  //empty list.  
	{
		ReplaceNextNode(newNode, thisList->list); 
		thisList->list = newNode; 
		
	}
	else
	{
		PNODE current = thisList->list;

		while (GetNextNode(current) != NULL)
		{
			current = GetNextNode(current);
		}
		ReplaceNextNode(current, newNode); 
	}
}

//Function removes item from top of stack
void popitem(PLIST thisList, ITEM itemToBeDeleted) 
{

	PNODE current = thisList->list;
	if(current)
	{ 
		if (CompareItems(current->nodedata, itemToBeDeleted))
		{
			if (GetNextNode(current) != NULL)  
				thisList->list = GetNextNode(current);
			else  
				thisList->list = NULL;

			DisposeNode(current);
			return;
		}
	}
	PNODE prev = NULL; 
	while (current != NULL && !CompareItems(current->nodedata, itemToBeDeleted))
	{
		prev = current;
		current = GetNextNode(current);
	}

	if (current == NULL)
		return; 

	ReplaceNextNode(prev, GetNextNode(current));  //unlink the node from the list  

	DisposeNode(current);  // Free memory 

}

//ignore this function for now, im not done making this yet
/*
void searchstack(PLIST thisList, ITEM searchitem)
{
	PNODE current = thisList->list;
	if (current)
	{
		do
		{
			if (CompareItems(current->nodedata, searchitem)) 
			{
				break;
			}
			current = GetNextNode(current);
		} while (current != NULL);
	}
}
*/

//function displays stack
void displaystack(LIST thisList)
{
	if (thisList.list == NULL)
		return;
	else
	{
		PNODE current = thisList.list;
		do
		{
			DisplayItem(current->nodedata);
			current = GetNextNode(current);
		} while (current != NULL);
	}
}

//function empties stack
void disposestack(PLIST thisList)
{
	PNODE tmp;

	PNODE current = thisList->list;
	while (current != NULL)
	{
		tmp = current;
		current = GetNextNode(current);
		DisposeNode(tmp);
	}
}