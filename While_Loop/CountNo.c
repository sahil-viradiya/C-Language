#include<stdio.h>

void main()
{
    int cnt = 0,num;

    printf("Enter a number :");
    scanf("%d",&num);

    while (num>0)
    {
       num = num/10;
       cnt++;
       
    }
    printf(" digit is %d",cnt);
    
}