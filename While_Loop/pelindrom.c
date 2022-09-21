// Wap to check pelindrom or not
#include <stdio.h>

void main()
{
    int num, fno = 0, lno, First;

    printf("Enter no : \n");
    scanf("%d", &num);

    First = num;
    while (num > 0)
    {
        fno = (fno * 10) + (num % 10);
        num = num / 10;
    }
    printf("Reverse No : %d\n", fno);
    if (First == fno)
    {
        printf("it is pelindrom");
    }
    else
    {
        printf("It is not pelindrom");
    }
}