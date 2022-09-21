#include <stdio.h>
#include <stdbool.h>
void main()
{
    for (int i = 1; i <= 4; i++)
    {
        int j = 1;
        bool reversed = false;
        while (j > 0)
        {
            if (j <= 4 && reversed == false)
            {
                if (i + j == 5)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                j++;
                // break;
            }
            // printf("%d",j);
            else
            {
                reversed = true;
                j--;

                if (i + j == 6)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}