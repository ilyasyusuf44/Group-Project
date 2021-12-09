/*
Anh Ngo

		RESOURCES USED

1. https://www.youtube.com/watch?v=_IIiqGdWG9s
(How to Create, Read and Write to a File in C Programming)

2. https://www.youtube.com/watch?v=38I_AUMpKpQ
(C Programming Tutorial - 50 - Writing Files in C)

*/


#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define _CRT_SECURE_NO_WARNINGS





main() {

// The file part seems to be working well.
// You will probably be able to continue/finish this up by today


FILE* cookBook;
cookBook = fopen("filename.txt", "r");
char singleLine[150];

while (!feof(cookBook))
{
	fgets(singleLine, 150, cookBook);
	puts(singleLine);
}

//section where the files will be processed




fclose(cookBook);

return 0;



}