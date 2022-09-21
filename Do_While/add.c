#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, sum;
    int ch;

    do
    {
        printf("\n1.Addition \n");
        printf("Enter Your choise :");
        scanf("%d", &ch);

        printf("Enter Value a and B :");
        scanf("%d %d", &a, &b);

        switch (ch)
        {
        case 1:
            sum = a + b;
            printf("Addition is : %d", sum);
            break;

        default:
            exit(0);
            break;
        }

    } while (ch == 1);
}