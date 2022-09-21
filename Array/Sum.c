#include <stdio.h>
// void main()
// {//Static value
//     int a[5]={10,20,30,40,50};
//     int sum = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("%d",sum);

// }
void main()
{
    // dyanamic value
    int a[100], sum, n, i;

    printf("Enter Size of array :");
    scanf("%d", &n);

    printf("Enter Element of array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}