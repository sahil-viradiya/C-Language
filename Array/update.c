#include <stdio.h>
void main()
{
    int a[50], n, pos, e;
    // size of array
    printf("Enter Size of array :\n");
    scanf("%d", &n);

    printf("\n Enter Element of array :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // print array
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    // enter pos and ele
    printf("\n Enter Postion and array :");
    scanf("%d %d", &pos, &e);

    a[pos] = e;

    for (int i = 0; i < n; i++)
    {
        printf("%d,", a[i]);
    }
}