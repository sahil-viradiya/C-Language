#include <stdio.h>


void main()
{
    int i,j;
    for (i = 4; i >=1; i--)
    {
        for (j = 1; j <= 4-i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <=i; j++)
        {
           printf("%d ",i);
        }
        printf("\n");
        
        
    }
    

}