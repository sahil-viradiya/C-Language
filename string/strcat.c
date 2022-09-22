// concate
#include <stdio.h>
#include <string.h>

// void main()
// {
//     char ch[50], st[50];

//     printf("Enter Your Name \a :");
//     gets(ch);

//     printf("your name is : %s \n\a", ch);

//     printf("Enter Your Surname :\n\a");
//     gets(st);

//     printf("Your Surname is :%s\n\a",st);

//     strcat(ch,st);
//     printf("Concate String is : %s",ch);

// }

// logic

void main()
{
    char a[50] = {"Sahil"};
    char b[50] = {"Viradiya"};
    int i, j, Fstring, Sstring, total;

    Fstring = strlen(a);
    Sstring = strlen(b);
    total = Fstring + Sstring;
    j = 0;
    for (i = Fstring; i < total; i++)
    {
        a[i] = b[j];
        j++;
    }
    printf("%s", a);
}