#include<stdio.h>

void main()
{
    int BaseSalary,HRA,DA,FinalSalary;

    printf("Enter BaseSalary : "); 
    scanf("%d",&BaseSalary);

    if (BaseSalary<=10000)
    {
        HRA = BaseSalary*20/100;
        DA = BaseSalary*80/100;
    }
    else if (BaseSalary<=20000)
    {
        HRA = BaseSalary*25/100;
        DA  = BaseSalary*90/100;
    }
    else
    {
        HRA = BaseSalary*30/100;
        DA  = BaseSalary*95/100;
    }

    FinalSalary = BaseSalary + HRA + DA;
    printf("Final salary is  : %d",FinalSalary);
    
}