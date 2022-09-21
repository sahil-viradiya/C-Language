#include <stdio.h>

void main()
{
    // int i;
    int a[15] = {1, 2, -3, -4, 5};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("\n Nagative No : ");
    for (i = 0; i < 5; i++)
    {
        if (a[i] < 0)
        {
            printf("%d", a[i]);
        }
    }
}