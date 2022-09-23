#include <stdio.h>
#include <string.h>
void main()
{
    int a[50] = {1, 2, 3, 4, 5};

    int i, ele, n;
    int position;

    printf("Enter Size of array: ");
    scanf("%d", &n);

    printf("\n Enter Element of array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\n First array :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    printf("\n Enter Position for delet Element :");
    scanf("%d", &position);

    for (int i = 0; i < n; i++)
    {

        if (i == position)
        {
            ele = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (ele != a[i])
        {
            printf("%d", a[i]);
        }
    }
}