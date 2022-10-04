#include <stdio.h>
// Factorial number
int Fact()
{
    int num, mult = 1;
    printf("Enter a Number :");
    scanf("%d", &num);

    while (num >= 1)
    {
        mult *= num;
        num--;
    }
    return mult;
}

// Tabele
//take nothing return nothing
void Table()
{
    int num, i = 1,ans;
    printf("Enter A Table Number :");
    scanf("%d", &num);

    while (i <= 10)
    {
        ans=i * num;
        printf("%d * %d = %d\n", num, i,ans);
        i++;
    }
}

//fibonaci
int Fibo()
{
    int num,t1=0,t2=1,t3=0;
    printf("\nEnter A Number For fibo :");
    scanf("%d",&num);
    while (num>=t3)
    {
        printf("\n%d",t3); 
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
    
}


void main()
{
    Table();
    // Factorial number
    int ans;
    ans = Fact();
    printf("\nFactroial is : %d", ans);

   Fibo();
}