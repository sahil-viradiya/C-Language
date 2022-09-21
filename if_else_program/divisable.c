#include<stdio.h>

void main()
{
    int num;

    printf("Enter number  :) ");
    scanf("%d",&num);

    // if (num%5==0)
    // {
    //     printf("yes, this number is divisable by 5 ");
    // }
    // else if(num%11==0)
    // {
    //     printf("\nyes, this number is divisable by 11");
    // }
    // else
    // {
    //     printf("this number is not divisable by 5 or 11");
    // }
    
    
    
    
     if (num%5==0 && num%11==0)
    {
        printf("yes, this number is divisable by 5 or 11 ");
    }
    else
    {
         printf("this number is not divisable by 5 or 11");
    }


    //  if (num%5==0)
    // {
    //     printf("yes, this number is divisable by 5  \n");
    
    
    // if (num%11==0)
    // {
    //     printf("\nyes, this number is divisable by 11");
    // }
    // else
    // {
    //        printf("this number is not divisable by  11");
    // }
    // }
    // else
    // {
    //      printf("this number is not divisable by 5 ");
    // }
    
}
