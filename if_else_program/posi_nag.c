#include<stdio.h>

void main()
{
    int num;

    printf("Enter number  :) ");
    scanf("%d",&num);

    if (num>0)
    {
        printf("\n number is positive");
    }
    else if(num<0)
    {
        printf("\n number is nagitive");
    }
    else
    {
        printf("\n number is zero");
    }
}