#include<stdio.h>
#include<string.h>

void main()
{
    char ch[50],st[50];

    printf("Enter Your Name & Surname :");
    gets(ch);

   printf("your name & surname is : %s \n",ch);

   strcpy(st,ch);
   printf("Copy String is : %s",st);
}