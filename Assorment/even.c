#include <stdio.h>

void main()
{
    int i, a[100], cnt = 0, n;

    printf("Enter Number of Eements : ");
    scanf("%d", &n);

    printf("Enter size of array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Even numbber
    printf("Even number is :");
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            // printf("%d,", a[i]);       
            cnt++;
        }
    }
    printf("%d,", cnt);

    // odd number
    printf("\nOdd number is :");
    for (i = 0; i < 5; i++)
    {
        if (a[i] % 2 != 0)
        {
            printf("%d,", a[i]);
        }
    }
}