#include <stdio.h>
#include <stdbool.h>
void main()
{
    int i;

    for (i = 4; i >= 1; i--)
    {
        char cnt = 'A';
        int j = 1;
        bool reverse = false;
        while (j > 0)
        {
            if (j < 4 && reverse == false)
            {

                if (i <= j)
                {
                    printf("%c", cnt);
                    cnt++;
                }
                else
                {
                    printf(" ");
                }
                j++;
            }
            else
            {

                if (i <= j)
                {
                    printf("%c", cnt);
                    cnt--;
                }
                else
                {
                    printf(" ");
                }
                reverse = true;
                j--;
            }
        }
        printf("\n");
    }
}