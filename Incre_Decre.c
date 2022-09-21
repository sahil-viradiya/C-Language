//increment or decrement operatior
#include<stdio.h>

void main()
{
    int a,b,c;

    a = 20;
    b = 50;

    a++;
    printf("value a of  %d \n",a);

    ++b;
    printf("value a of  %d \n",b);

    a = a++;
    printf("Addition value a of : %d \n",a);

    c = ++b;
    printf("Substration  value of b %d \n",b);

    // a+=b;
    // printf("A and B addition is : %d",a);
}