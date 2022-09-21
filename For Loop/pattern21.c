#include <stdio.h>
#include <stdbool.h>

void main()
{
    int i = 1, j, k = 5;
    bool reversed = false;
    while (i > 0)
    {
        int cnt = 1;

        for (j = 1; j <= k; j++)
        {
            if (j <= k - i)
            {
                printf(" ");
            }
            else
            {
                if (reversed == true)
                {
                    cnt = j;
                }

                printf("%d", cnt);
                cnt++;
            }
        }
        if (i < 5 && reversed == false)
        {
            i++;
        }
        else
        {
            reversed = true;
            i--;
        }
        printf("\n");
    }
}