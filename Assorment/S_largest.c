// #include <stdio.h>
// #include <stdbool.h>
// void main()
// {
//     int i, first, second;
//     int a[10] = {1, 2, 3, 4, 10, 6, 7, 8}, large = 0, second_large = 0;
//     bool repeat = false;

//     for (i = 0; i < 8; i++)
//     {
//         if (!repeat)
//         {
//             if (large < a[i])
//             {
//                 large = a[i];
//             }
//         }
//         else
//         {
//             if (second_large < a[i] && large != a[i])
//             {
//                 second_large = a[i];
//             }
//         }

//         if (i == 7 && !repeat)
//         {
//             repeat = true;
//             i = 0;
//         }
//     }

//     printf("\n large :%d \n second large %d", large, second_large);
// }

// SECOND LOGIC

#include <stdio.h>

int main()
{
    int a[50] = {1, 3, 5, 23, 56, 76, 90};
    int i, large = 0, second_large = 0;

    for (i = 0; i <= 6; i++)
    {
        if (large < a[i])
        {
            large = a[i];
        }
    }
    printf(" large %d", large);

    for (i = 0; i <= 6; i++)
    {
        if (second_large < a[i] && large != a[i])
        {
            second_large = a[i];
        }
    }

    printf("\nsecond_large is : %d", second_large);
    return 0;
}
