#include <stdio.h>

void main()
{
    int num, i = 1, mul = 0;
    printf("Enter Digit :");
    scanf("%d", &num);

    do
    {
        mul = i * num;
        printf("%d * %d = %d\n", num, i, mul);
        i++;
    } while (i <= 10);
}