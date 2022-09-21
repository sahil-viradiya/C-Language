#include<stdio.h>

void main()
{
    int a,b,c;

    printf("Enter number a & b & c :) ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
        printf("\na is maximum");
    }
    else if(b>c)
    {
        printf("\nB is Maximum");
    }
    else
    {
        printf("\nC is Maximum");
    }
}