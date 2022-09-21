#include <stdio.h>

void main()
{
    int num, sum = 0, i;

    printf("Enter a Number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        i = num % 10;
        num = num / 10;
        sum = sum + i;
    }
    printf("Sum of : %d", sum);
}