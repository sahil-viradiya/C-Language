//wap to calculate power[5^3=125]
#include <stdio.h>

void main()
{
   int num, e, mul = 1, i = 1;

   printf("Enter number : ");
   scanf("%d", &num);

   printf("Enter exponet : ");
   scanf("%d", &e);

   while (i <= e)
   {
      mul = mul * num;
      i++;
   }
   printf("Power is : %d", mul);
}