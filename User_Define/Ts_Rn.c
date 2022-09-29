#include <stdio.h>
#define PI 3.14
// take somthing return nothing
// area of squre
void area(float a)
{
    float circle;
    circle = PI * a * a;
    printf("%f\n", circle);
}
// pelindrom
void pelindrom(int n)
{
    int a;
    a = n;
    int fno = 0;
    while (n > 0)
    {
        fno = (fno * 10) + (n % 10);
        n = n / 10;
    }
    // check pelindrom or not
    if (a == fno)
    {
        printf("\nyes it is pelindrom");
    }
    else
    {
        printf("it is not pelindrom");
    }
}
// Factorial
void Factorial(int n)
{
    int mult = 1, i = 1;

    while (n >= i)
    {
        mult = mult * n;
        n--;
    }
    printf("%d", mult);
}
// fibonaci
void Fibonaci(int f)
{
    int t1 = 0, t2 = 1, t3 = 0;

    while (f >= t3)
    {
        printf("%d \n", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
}

void main()
{
    // Area of Circle
    float a;
    printf("\n Enter A Radius :");
    scanf("%f", &a);
    area(a);

    // pelindrom
    int n;
    printf("Enter A Number :");
    scanf("%d", &n);
    pelindrom(n);

    // Factorial
    int num;
    printf("\n Enter a fact Number :");
    scanf("%d", &num);
    Factorial(num);

    // finonaci
    int fact;
    printf("\n Enter Fibo number :");
    scanf("%d", &fact);
    Fibonaci(fact);
}
