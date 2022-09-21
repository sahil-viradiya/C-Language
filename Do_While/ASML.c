#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, ch, add, mul, sub, div;
    {
        do
        {
            printf("1.Addition\n 2.Substration\n 3.Division\n 4.Multiplication\n 5.Exit\n");
            printf("Enter Choise :");
            scanf("%d", &ch);
            printf("Enter Value a & b :\n");
            scanf("%d %d", &a, &b);

            switch (ch)
            {
            case 1:
                add = a + b;
                printf("Addition is %d\n", add);
                break;
            case 2:
                sub = a - b;
                printf("Substration is %d\n", sub);
                break;
            case 3:
                div = a / b;
                printf("Division is %d\n", div);
                break;
            case 4:
                mul = a * b;
                printf("Multiplication is %d\n", mul);
                break;
            case 5:
                exit(0);
                break;
            }
        } while (ch < 6);
    }
}
