#include <stdio.h>
void main()
{

    int i = 1,j=1;

    int limit;

    printf("Enter limit of fibo : ");
    scanf("%d", &limit);

    while (j < limit){
       int temp = j;

       j=i+j;
       i = j;

        printf("%d\n",j);
      
    }
}