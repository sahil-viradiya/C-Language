// #include <stdio.h>
// #include <stdbool.h>
// void main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         int j = 1;
//         int cnt = 5;
//         bool reversed = false;
//         while (j > 0)
//         {
//             if (j <= 4 && reversed == false)
//             {
//                 if (i + j >= 6)
//                 {
//                     // printf("*");
//                     printf("%d", cnt);
//                     cnt--;
//                 }
//                 else
//                 {
//                     printf(" ");
//                 }
//                 j++;
//                 // break;
//             }
//             // printf("%d",j);
//             else
//             {
//                 reversed = true;
//                 j--;

//                 if (i + j >= 5)
//                 {
//                     //  printf("*");
//                     printf("%d", cnt);
//                     cnt++;
//                 }
//                 else
//                 {
//                     printf(" ");
//                 }
//             }
//         }
//         printf("\n");
//     }
// }
#include <stdio.h>
#include <stdbool.h>

void main()
{
    int i;
    for (i = 5; i >= 1; i--)
    {
        int j = 1;
        int cnt = 5;
        bool reverse = false;
        while (j > 0)
        {
            if (j < 5 && reverse==false)
            {
                if (j >=i)
                {
                    printf("%d", cnt);
                    cnt--;
                }
                else
                {
                    printf(" ");
                }
                j++;
            }
            else
            {
                reverse=true;
                j--;
                if (j>=i-1)
                {
                   printf("%d",cnt);
                    cnt++;
                }
                else
                {
                    printf(" ");
                }
                
            }
        }

        printf("\n");
    }
}