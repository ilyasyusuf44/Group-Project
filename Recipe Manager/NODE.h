#pragma once
#include "ITEM.h"
#include "NODE.h"
#include "Recipe Manager Functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {

	ITEM nodedata; 
	struct node* nextnode;

}NODE, *PNODE;

PNODE CreateNode(ITEM);   


PNODE GetNextNode(PNODE);

void ReplaceNextNode(PNODE, PNODE);


void DisposeNode(PNODE); 