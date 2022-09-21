#include<stdio.h>

void main()
{
    int a= 10;
    int b =5;


    a+=b;
    printf("Addition is %d",a);

    a-=b;
    printf("\nSubstration is %d",a);

    a*=b;
    printf("\n Multiolication is %d",a);

    a/=b;
    printf("\nDiviision is %d",a);

    a%=b;
    printf("\nModulo is %d",a);


}