// 	C program to read a file and display its contents
#include <stdio.h>
#include <string.h>
void main()
{
    FILE *file;

    char ch;

    file = fopen("F:/C_Test/Supervision/lotery.txt", "r");

    if (file == NULL)
    {
        printf("Unable to file open\n");
    }
    else
    {

        printf("File opened successfully. Reading file contents character by character. \n\n");
        while (ch != EOF)
        {
            ch = fgetc(file);
            putchar(ch);
        }
    }

    fclose(file);
}