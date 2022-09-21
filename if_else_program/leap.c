#include<stdio.h>

void main()
{
    int year;

    printf("Enter number  :) ");
    scanf("%d",&year);

    if (year%4==0)
    {
        printf("\n this year is leap year %d",year);
    }
  
    else
    {
        printf("\n this year is not leap year %d",year);
    }
}