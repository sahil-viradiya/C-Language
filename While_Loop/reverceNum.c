// wap to print reverse number of user input
#include <stdio.h>

void main()
{
    int num, reverse = 0, i;

    printf("Enter Number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
    }
    printf("reverse Is *: %d", reverse);
}
