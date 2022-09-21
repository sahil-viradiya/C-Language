#include<stdio.h>

void main()
{
    char alphabet;

    printf("Enter Aplphabet  :) ");
    fflush(stdin);
    scanf("%c",&alphabet);

    if (alphabet >= 'A' && alphabet <= 'Z' || alphabet >= 'a' && alphabet <= 'z')
    {
        printf("yes, this is alphabet num ");
    }
    else
    {
        printf("\n this is not alphabet ");
    }

}
   