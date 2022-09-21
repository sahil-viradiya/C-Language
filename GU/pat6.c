#include <stdio.h>

void main()
{
    int i, j;
    int cnt = 1;

    for (i = 1; i <= 4; i++)
    {
        
        for (j = 1; j <= 4 - i; j++)
        {

            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", cnt % 2);
            cnt++;
        }
        printf("\n");
    }
}



