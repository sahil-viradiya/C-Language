#include <stdio.h>

void main()
{
    int i, j, a[3][3], b[10][10], mult[10][10];

    printf("Enter elements of first matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix A of :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter Element of Second Matrix :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Matrix B of :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    printf("Multiplication B of :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mult[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // print

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }
}
