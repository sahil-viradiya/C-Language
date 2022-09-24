// #include <stdio.h>
// #include <string.h>
// void main()
// {
//     int a[50] = {1, 2, 3, 4, 5};
//     int b[50] = {};
//     int n = 9;
//     int position = 2;

//     int j = 0;
//     for (int i = 0; i < 6; i++)
//     {

//         if (i == position)
//         {
//             b[i] = n;
//         }
//         else
//         {
//             b[i] = a[j];
//             j++;
//         }
//     }

//     for (int i = 0; i < 6; i++)
//     {
//         printf("%d", b[i]);
//     }
// }

#include <stdio.h>
void main()
{
    int n, i, a[50], pos, e, b[50];
    // size of array
    printf("Enter size of array :");
    scanf("%d", &n);

    printf("\n Enter Element of array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // enter postion
    printf("\n Enter Postion :");
    scanf("%d", &pos);

    // enter instert Element
    printf("\n Enter New Element :");
    scanf("%d", &e);

    // print array
    int j = 0;
    for (i = 0; i < n + 1; i++)
    {
        // printf("%d,", a[i]);
        if (a[i] == pos)
        {
            b[i] = e;
        }
        else
        {
            b[i] = a[j];
            j++;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("\n%d,", b[i]);
    }
}