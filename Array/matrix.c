#include <stdio.h>

void main()
{
    int i, j, n, m, a[100][100], sum = 0;

    printf("Enter size of array :\n");
    scanf("%d %d", &m, &n);

    printf("Enter element of array :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix of :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of dioagnal elements :");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
    }
     printf("%d",sum);
}