//	C program to create a file and write data into file
#include <stdio.h>
#include <string.h>
void main()
{
    char name[50];
    FILE *file = fopen("F:/C_Test/Supervision/lotery.txt", "w"); // "w" will overwrite the file if exists
    if (file == NULL)
    {
        // failure openning the file
        printf("Unable to create file.\n");
    }

    printf("Enter Details for File :");
    gets(name);
    fputs(name, file);

    printf("File created and saved successfully. :) \n");
}