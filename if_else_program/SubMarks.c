#include<stdio.h>

void main()

{
    int marks,Guj,Eng,Hindi,SS,BA;

    printf(" Enter Marks Guj,Eng,Hindi,SS,BA :");
    scanf("%d %d %d %d %d",&Guj,&Eng,&Hindi,&SS,&BA);

    marks = (Guj+Eng+Hindi+SS+BA)/5;
    printf("Persantage = %d \n",marks);

    if (marks>=90)
    {
        printf("Grade A");
    }
    else if (marks>=80)
    {
        printf("Grade B");
    }
    else if (marks>=70)
    {
        printf("Grade C");
    }
    else if (marks>=60)
    {
        printf("Grade D");
    }
    else if (marks>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("FAIL");
    }
    
    
    
    
    
}