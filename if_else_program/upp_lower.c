#include<stdio.h>

void main()
{
    char ch;

    printf("Enter value : ");
    scanf("%c",&ch);


    if (ch >='A' && ch <='Z')
    {
        printf("\n*it is UpperCase*");
    }
    else
    {
        printf("\nit is LowerCase ");
    }
    
    
}