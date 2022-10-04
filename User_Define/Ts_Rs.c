#include <stdio.h>
#define pi 3.14
// pelindrom
int pelindrom(int num)
{
    int original_num, mult = 0;
    original_num = num;
    while (num > 0)
    {
        mult = (mult * 10) + (num % 10);
        num = num / 10;
    }
    return mult;
}

// fact
int fact(int f)
{
    int mult = 1, i = 1;
    while (f >= i)
    {
        mult *= i;
        i++;
    }
    return mult;
}

// area of squre
int area_squre(int r)
{
    int area;
    area = pi * r * r;
    return area;
}

void main()
{
    // pelindrom
    int n, ans;
    printf("Enter number : ");
    scanf("%d", &n);
    pelindrom(n);

    if (pelindrom(n) == n)
    {
        printf("\nYes it is pelindrom\n ");
    }
    else
    {
        printf("\nIt is not pelindrom\n");
    }

    // factorial
    int num, v;
    printf("Enter fact number :");
    scanf("%d", &num);
    fact(num);
    printf("\nFactorial is %d\n", fact(num));

   //area of square
   int area_square;
   printf("Enter Area : ");
   scanf("%d",&area_square);
//    ans=area_squre(area_square);
   printf("Area Of Square is : %d",area_squre(area_square));
}