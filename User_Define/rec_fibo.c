#include<stdio.h>
int i=0,t1=0,t2=1,t3=0;
void fibo(int n)
{
    if (n>=t3)
    {
        printf("%d,",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
        fibo(n);
    }
    
}
void main()
{
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    fibo(num);
}