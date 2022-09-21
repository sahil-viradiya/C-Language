#include<stdio.h>
#include<stdbool.h>
void main()
{
    int  i =1;
     
    bool reversed = false;
    while (i>0)
    {
        for (int j = i; j >=1; j--)
        {
            printf("%d",j);
        }
        if (i<5 && reversed==false)
        {
            i++;
        }
        else
        {
            reversed=true;
            i--;
        }
        
        printf("\n");
        
    }
    
}