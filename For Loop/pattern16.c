#include <stdio.h>
void main()
{
    int k = 5;
    for (int i = 1; i <= k; i++)
    {
        int cnt = 1;
        for (int j = 1; j <= k; j++)
        {
            // printf("%d", j);
            if (j >= i)
            {
                 printf("%d", cnt);
                cnt++;
            }
            else
            {
                printf(" ");
            }
        }
        // printf("%d",i);
        printf("\n");
    }
}