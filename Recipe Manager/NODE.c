#pragma once
#include "ITEM.h"
#include "NODE.h"
#include "Recipe Manager Functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//function creates a node from a given item
PNODE CreateNode(ITEM item)
{
	PNODE newNode = (PNODE)malloc(sizeof(NODE));
	if (!newNode)
	{
		fprintf(stderr, "error allocating memory\n");
		exit(1);
	}
	newNode->nodedata = CopyItem(item);
	newNode->nextnode = NULL;

	return newNode;
}

//Function returns the node after the current node in the list.
PNODE GetNextNode(PNODE listNode)
{
	return listNode->nextnode;
}

//Function replaces the next node in the list
void ReplaceNextNode(PNODE sourceListNode, PNODE newNextNode)
{
	sourceListNode->nextnode = newNextNode;
}

//function deletes a node
void DisposeNode(PNODE listNode)
{	
	DisposeItem(listNode->nodedata);
	free(listNode);
	
}