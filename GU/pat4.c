#include <stdio.h>

void main()
{
    // int i,j;
    char i, j;
    char cnt = 'A';
    for (i = 'A'; i <= 'D'; i++)
    {

        for (j = 1; j <= 'D' - i; j++)
        {
            printf(" ");
        }
        for (j = 'A'; j <= i; j++)
        {
            printf("%c ", cnt);
            cnt++;
        }
        printf("\n");
    }
}