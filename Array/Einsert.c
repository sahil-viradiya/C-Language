#include <stdio.h>
#include <string.h>
void main()
{
    int a[50] = {1, 2, 3, 4, 5};
    int b[50] = {};
    int n = 9;
    int position = 2;

    int j = 0;
    for (int i = 0; i < 6; i++)
    {

        if (i == position)
        {
            b[i] = n;
        }
        else
        {
            b[i] = a[j];
            j++;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d", b[i]);
    }
}