// C program to write even, odd and prime numbers to separate file
#include <stdio.h>
void main()
{
    FILE *feven, *fodd, *fprime;
    int num, c = 0, i = 1;
    fodd = fopen("F:/C_Test/Supervision/odd.txt", "w");
    feven = fopen("F:/C_Test/Supervision/even.txt", "w");
    fprime = fopen("F:/C_Test/Supervision/prime.txt", "w");
    if (feven == NULL || fodd == NULL || fprime == NULL)
    {
        printf("unable to load file >>");
    }

    printf("Enter Number :");
    scanf("%d", &num);

    if (num % 2 == 0)
    {

        fprintf(fodd, "odd nu is %d\n", num);
    }
    else
    {
        fprintf(feven, "Even no is %d\n", num);
    }

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
        fprintf(fprime, "prime no is %d\n", num);
    }

    fclose(fodd);
    fclose(feven);
    fclose(fprime);

    printf("data saved succesfully");
}