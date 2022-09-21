#include <stdio.h>

void main()
{
    int n, i = 1, mul = 1;
    printf("Enter number :");
    scanf("%d", &n);

    while (n >= i)
    {
        mul = mul * i;
        i++;
    }
    printf("Factorial is %d", mul);
}   