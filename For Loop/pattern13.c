#include<stdio.h>

void main()
{
    for (char i = 1; i <= 5; i++)
    {
        for (char j = 1; j <=i; j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
    
}