#include<stdio.h>

void main()
{
    char ch;

    printf("Enter any char a to z : ");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\nit is Vovel ");
            break;
        
        default:
            printf("\nit is consonet ");
            break;
        }
    }
    else
    {
        printf("invalid character");
    }
    
}