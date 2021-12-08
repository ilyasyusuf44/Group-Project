#pragma once
#include "NODE.h"
#include "ITEM.h"
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct list {

	PNODE list;

}LIST, *PLIST;

LIST CreateList();
void pushitem(PLIST, ITEM);
void popitem(PLIST, ITEM);
void displaystack(LIST); 
void disposestack(PLIST); 
void searchstack(LIST, ITEM);