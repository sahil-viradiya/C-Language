// concate
#include <stdio.h>
#include <string.h>

void main()
{
    char ch[50], st[50];

    printf("Enter Your Name \a :");
    gets(ch);

    printf("your name is : %s \n\a", ch);
   
    printf("Enter Your Surname :\n\a");
    gets(st);

    printf("Your Surname is :%s\n\a",st);
    
    strcat(ch,st);
    printf("Concate String is : %s",ch);

    
}