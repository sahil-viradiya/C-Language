#include <stdio.h>
#include <string.h>

// void main()
// {
//     char ch[50];

//     printf("Enter Your Name & Surname :");
//     gets(ch);

//     printf("\n Your String length : %d", strlen(ch));
// }
void main()
{
    char ch[50];
    int i;

    printf("Enter String :");
    gets(ch);

    for (i = 0; ch[i] != '\0'; i++);
    {
        printf(" Length of String : %d", i);
    }
}