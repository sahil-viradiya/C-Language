#include <stdio.h>

void main()
{
    for (int i =5; i >= 1; i--)
    {
        int cnt = 1;
        for (int j = 1; j <= 5; j++)
        {
            if (j<i)
            {
                printf(" ");
            }
            else
            {
                printf("%d",cnt);
                cnt++;
            }
            
        }
        printf("\n");
    }

    
}


