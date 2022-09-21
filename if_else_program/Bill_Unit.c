#include<stdio.h>

void main()
{
    float unit,amt,charge,Bil;

    printf("Enter Unit :");
    scanf("%f",&unit);

    if (unit<=50)
    {
        amt = unit*0.50;//25
    }
    else if (unit<=150)
    {
        amt = 25 + ((unit-50)*0.75);
    }
    else if (unit<=250)
    {
        amt = 100 + ((unit-150)*1.20);
    }
    else
    {
        amt = 220 + ((unit-250)*1.50);
    }   
    
    charge = (amt*20)/100;
    Bil = charge + amt;
    printf("Your bil is : %f",Bil);
    
}

