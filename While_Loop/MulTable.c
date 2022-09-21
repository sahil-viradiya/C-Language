#include<stdio.h>

void main()
{
    int n,mul=1,s;

    printf("Enter Num : ");
    scanf("%d",&n);

    while (mul<=10)
    {
       s = n * mul;
        
       
        printf("%d * %d = %d \n",n,mul,s);
         mul++;
    }
   
    
}