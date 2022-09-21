#include<stdio.h>

void main()
{
    int sum = 0;
    int num;
    while (num<=10)
    {
        // sum += num;
        sum = sum + num;
        num++;/* code */
    }
    printf("Sum of 1 to 10 number is : %d",sum);
    
}