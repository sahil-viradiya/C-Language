#include <stdio.h>
#include <string.h>

// void main()
// {
//     char ch[50];

//     printf("Enter Your Name & Surname :");
//     gets(ch);

//    printf("your name & surname is : %s \n",strrev(ch));

// }
// without using function
void main()
{
    char ch[50];
    int length;

    printf("Please insert the string you want to revers : \n");
    gets(ch);

    length = strlen(ch);

    for (int i = length; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }
}