#include<stdio.h>

void main()
{
    int days,year,month;
    printf("Enter Days :");
    scanf("%d",&days);

    if (days >= 365)
    {
        year = days / 365;
        days -= year * 365;
        printf("\n year : %d", year);
        printf("\n Days : %d",days);
    }
    else if (days>=30)
    {
        month = days / 30;
        days -= month * 30;
        printf("\n month : %d", month);
        printf("\n Days : %d",days);
    }
    
}