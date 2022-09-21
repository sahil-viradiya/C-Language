//area of square
#include<stdio.h>

void main()
{
   
    float r,a,area;
    const float pi = 3.14;
   


    printf("Enter value of r : \n");
    scanf("%f",&r);

    printf("Enter value of a :\n");
    scanf("%f",&a);


    area = pi*r*a;
    printf("Area o sqaure : %f",area);
}