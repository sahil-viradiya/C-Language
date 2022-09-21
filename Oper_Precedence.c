#include<stdio.h>

void main()
{
    int a = 20,
     b = 40, 
     c = 60, 
     d = 30,
      e,f,g,h;

    e = (a + b) * c/d;
// right to left
    printf("value of e %d\n",e);

f = ((a+b)*c)/d;
// right to left 
printf("value of f %d\n",f);

    g = (a+b)*(c/d);
    printf("value of g %d\n",g);

h = a + (b*c)/d;
printf("value of H %d",h);


}