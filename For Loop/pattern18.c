#include <stdio.h>

void main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        int cnt = 5;
        for (int j = 5; j >= 1; j--)
        {
            if (j > i)
            {
                printf(" ");
            }
            else
            {
                printf("%d", j);
            }
        }
        printf("\n");
    }
}