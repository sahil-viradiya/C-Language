// variable
// short %d
// int %d or %i
// long int
// char %c
// float %f
// double %lf
//long double %Lf

//print single quote(\')
//print double quote(\"")
//print bcakslash (\\)
#include<stdio.h>

void main()
{
    //int 
    int a;
    a = 10;
    printf("value a of %d\n\n",a);

    //char

    char ch='S';
    printf("charcter of \\\"%c\"\n\n",ch);

    //float
    float F;
    F=250.02;
    printf("value F of %f\n\n",F);

    //double
    double D;

    D = 102.0100101;
    printf("valude D of %lf\n\n",D);

    double L;
    L = 150.256325;
    printf("long doubble %Lf",L);



}