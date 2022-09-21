#include <stdio.h>
#include <stdbool.h>
void main()
{
    int i = 1;
    for (i = 1; i <= 5; i++)
    {
        bool reversed = false;
        int j = 1;
        while (j > 0)
        {
            // printf("%d",j);
            if (j < 5 && reversed == false)
            {

                if (j <= i)
                {
                    printf("%d", j);
                }
                else
                {
                    printf(" ");
                }
                // printf("\n");
                j++;
            }
            else
            {

                if (j <= i)
                {
                    printf("%d", j);
                }
                else
                {
                    printf(" ");
                }
                if (reversed == false)
                {
                    j++;
                }
                reversed = true;
                j--;
            }
        }
        printf("\n");
    }
}
