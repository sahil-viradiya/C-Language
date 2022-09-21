#include <stdio.h>

void main()
{
    int num, i = 1, c = 0;

    printf("Enter Num : \n");
    scanf("%d", &num);

    while (num >= i)
    {
        if (num % i == 0)
        {
            c++;
        }

        i++;
    }
    if (c == 2)
    {
        printf("it is prime ");
    }
    else
    {
        printf("not prime");
    }
}