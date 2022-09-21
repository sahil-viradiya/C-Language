#include <stdio.h>
#include <string.h>

// void main()
// {
//     char ch[50],st[50];

//     printf("Enter Your Name & Surname :");
//     gets(ch);

//    printf("your name & surname is : %s \n",ch);

//    strcpy(st,ch);
//    printf("Copy String is : %s",st);
// }

void main()
{
    char ch[50], cp[50], i;

    printf("Enter A String :");
    gets(ch);

    for (i = 0; ch[i]>='\0'; i++)
    {
        cp[i] = ch[i];
    }
    printf("first string is :%s\n ", ch);

    printf("Copy String is :%s", cp);
}