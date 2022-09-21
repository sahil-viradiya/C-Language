#include<stdio.h>

void main()
{
    int num;

    printf("Enter number : ");
    scanf("%d",&num);

    while (num>0)
    {
        printf("num is %d \n ",num);
        num--;
    }
    
}
