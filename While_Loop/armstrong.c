#include <stdio.h>

void main()
{
    int num, i, sum = 0, a;

    printf("Enter Number : \n");
    scanf("%d", &num);

    a = num;
    while (num > 0)
    {
        i = num % 10;
        sum = sum + (i * i * i);
        num = num / 10;
    }
    printf("Armestrong is %d\n", sum);
    if (a == sum)
    {
        printf("It is armstrong");
    }
    else
    {
        printf("It is not armstrong");  
    }
}