#include<stdio.h>

void main()
{
    char x,y,vovel;

    printf("Enter a char : ");
    fflush(stdin);
    scanf("%c",&vovel);

    x = vovel == 'A' || vovel =='E' || vovel =='I' || vovel =='O' || vovel == 'U' ;
    y =  vovel == 'a' || vovel =='e' || vovel =='i' || vovel =='o' || vovel == 'u';
    
    
    if (x ||  y)
    {
        printf("it is Vovel ");
    }
    else
    {
        printf("it is consonant ");
    }

    
   
}