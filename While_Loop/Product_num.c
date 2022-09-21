//wap to find product number. [234 = 2*3*4 = 24]
#include<stdio.h>

void main()
{
    int num,mul=1,i;

    printf("Enter Number : ");
    scanf("%d",&num);

    while (num>0)
    {
        i = num % 10;
        num = num /10 ;
        mul = mul * i;
    }
    printf("Multiplication is : %d",mul);
    
}