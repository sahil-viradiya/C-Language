#include <stdio.h>
#include <string.h>

void main()
{
    char ch[50];

    printf("Enter Your Name & Surname :");
    gets(ch);

    // printf("your name & surname is : %s", ch);
    // strlen(ch);

    printf("\n Your String length : %d", strlen(ch));
}