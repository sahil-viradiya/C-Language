#include <stdio.h>
int mul = 1;
void hello(int i)
{

    if (i > 0)
    {

        mul = mul * i;
        i--;
        hello(i);
    }
}
void main()
{
    int j;
    printf("Enter Number :");
    scanf("%d", &j);
    hello(j);
    printf("Fact is %d", mul);
}