#include<stdio.h>
void main()
{
    int k = 5 ;
    for (int i = 1; i <=k; i++)
    {
        for (int j = k; j >=1; j--)
        {
            if (i<j)
            {
                printf(" ");
            }
            else
            {            
            printf("%d",j);
            }
        }
    printf("\n");    
    }
    
}