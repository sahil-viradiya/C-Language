#include<stdio.h>

void main()
{
    int a , b;

    // a = 20;
    // b = 50;

    printf("Enter F No is :");
        scanf("%d",&a);
    
    printf("Enter S no is :");
        scanf("%d",&b);

    if(a<b)
    {
        printf("maximum no is :%d",b);    
    }
   else
    {
       printf("minmum no is :%d",a);
    }
}