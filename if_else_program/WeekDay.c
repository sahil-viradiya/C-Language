#include<stdio.h>

void main()
{
    int number;
    

    printf("Enter a Week Number 1 to 7 : ");
    scanf("%d",&number);

    if (number==1)
    {
        printf("Sunday");
    }
    else if (number==2)
    {
        printf("Monday");
    }
    else if (number==3)
    {
        printf("Tuesday");
    }
    else if (number==4)
    {
        printf("Wednesday");
    }
    else if (number==5)
    {
        printf("Thursday");
    }
    else if (number==6)
    {
        printf("Friday");
    }
    else if (number==7)
    {
        printf("Satuarday");
    }
    else
    {
        printf("\n*Enter a Valid  Number* ");
    }
    printf("\nThank You :)");
    

}