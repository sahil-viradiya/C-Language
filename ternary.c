// using turnary oeratior
#include<stdio.h>

void main()
{
    int a,b,c,d,e,f;

    a = 20;
    b = 60;
    c = 120;
    d = 160;


  //  if (a>b && a>c)
  //  {
  //    printf("a is max :");
  //  }
  //  else if (b>c && b>a)
  //  {
  //   printf("b i is max :");
  //   /* code */
  //  }
  //  else
  //  {
  //   printf("c is max  \n");
  //  }

  //  d =(a>b && a>c)?a: (b>c && b>a)? b:c;

   
  //  printf("Maxi nu is %d",d);


   (a>b && a>c && a>d)?printf("A is max :",a):(b>c && b>d)?printf("B is max %d",b):(c>d)?printf("C is max %d",c):printf("D is maximum %d",d);
   
    
    
    
}