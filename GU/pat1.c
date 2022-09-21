#include <stdio.h>
void main()
{
    int i;
    for (i =1; i <= 4; i++)
    {
        for (int j = 1; j <= 4-i; j++)
        {
            printf(" ");
        }
        for (int j =1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
}