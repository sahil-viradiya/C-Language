#include<stdio.h>
void main()
{
    
    int  large = 0, second_large = 0;
    int i,first,second;
    int a[10] = {1,2,3,4,10,6,7,8};

      for (i = 0; i <8; i++)
    {
        printf("%d\n",a[i]);
        if (a[0] < a[i])
        {
            large = a[i];
           

        }

    }
    printf(" large %d", large);

    first = a[0];

    for ( i = 0; i < 8; i++)
    {
        if (second_large < a[i] && large != a[i])
        if (first<a)
        {
            second_large = a[i];
            
        }

    }

    printf("\nsecond_large is : %d", second_large);
   
}
