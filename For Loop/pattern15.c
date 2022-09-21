#include <stdio.h>

void main()
{
    int k = 5;
    for (int i = 1; i <= k; i++)
    {
        int cnt = 1;
        for (int j = 1; j <= k; j++)
        {
            if (j <= k - i)
            {
                printf(" ");    
            }
            else
            {
                printf("%d", cnt);
                cnt++;
            }
        }

        // printf("%d",i);
        printf("\n");
    }
}