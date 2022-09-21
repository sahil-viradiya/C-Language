#include<stdio.h>

void main()
{
    char ch;

    printf("Enter value : ");
    scanf("%c",&ch);

   

    if (ch >='0' && ch <='9')
    {
        printf("\n*it is number*");
    }
    else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'z')
    {
        printf("\n*it is alphabet*");
    }
    else
    {
        printf("\nit is special charcter ");
    }
    
    
}