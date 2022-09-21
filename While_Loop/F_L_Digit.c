//wap to sum first & last digit of number 
#include<stdio.h>

void main()
{
    int num,LastDigit,FirstDigit,add;

    printf("Enter Number : ");
    scanf("%d",&num);

    LastDigit = num % 10;
    
    while (num>0)
    {
        FirstDigit = num % 10;
        num = num / 10;
       

    }
    
     printf("\n First Digit is : %d",FirstDigit); 
     printf("\n Last digit is : %d",LastDigit);
     add = FirstDigit + LastDigit;
     printf("\n Sum of : %d",add);
}