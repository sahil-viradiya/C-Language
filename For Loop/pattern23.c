#include <stdio.h>
#include <stdbool.h>
void main()
{
    int i = 1;
    bool reversed1 = false;
    while (i > 0)
    // for (i = 1; i <= 5; i++)
    {
        bool reversed = false;
        int j = 1;
        while (j > 0)
        {
            if (j <= 5 && reversed == false)
            {
                if (j <= 6 - i)
                {
                    printf("%d", j);
                }
                else
                {
                    printf(" ");
                }
                j++;
            }
            else
            {
                if (reversed == false)
                {
                    j--;
                }

                if (j <= 6 - i)
                {
                    printf("%d", j);
                }
                else
                {
                    printf(" ");
                }
                reversed = true;
                j--;
            }
        }
        if (i < 5 && reversed1 == false)
        {
            i++;
        }
        else
        {
            reversed1 = true;
            i--;
        }

        printf("\n");
    }
}