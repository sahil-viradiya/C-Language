#include <stdio.h>
void main()
{
    int i, j, m, n, a[100][100], b[100][100],sum[100][100];

    printf("Enter size of array :\n");
    scanf("%d %d", &m, &n);

    printf("Enter elements of array :\n");
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
// Tranpose Matrix 
    printf("Tranpose Matrix of :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[i][j] = a[j][i];
        }
    }
     for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
             printf("%d ", b[i][j]);
        }
        printf("\n");
    }


    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = b[i][j] + a[i][j];
        }
        
    }

    // sum of two matrix
    printf("sum of two matrix :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            // sum = b[i][j] + a[j][i];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
        
    }  
}
