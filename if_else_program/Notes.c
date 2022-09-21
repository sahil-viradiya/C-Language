// Counts total of notes of total amount
#include <stdio.h>

void main()
{
    int note2000, note500, note200, note100, note50, note20, note10;
    int amount;

    printf("Enter Your Amount : ");
    scanf("%d", &amount);

    if (amount >= 2000)
    {
        note2000 = amount / 2000;
        amount -= note2000 * 2000;
        printf("\nnote2000 : %d", note2000);
    }
    if (amount >= 500)
    {
        note500 = amount / 500;
        amount -= note500 * 500;
        printf("\nnote500 : %d", note500);
    }
    if (amount >= 200)
    {
        note200 = amount / 200;
        amount -= note200 * 200;
        printf("\nnote200 : %d", note200);
    }
    if (amount >= 100)
    {
        note100 = amount / 100;
        amount -= note100 * 100;
        printf("\nnote100 : %d", note100);
    }
    if (amount >= 50)
    {
        note50 = amount / 50;
        amount -= note50 * 50;
        printf("\nnote50 : %d", note50);
    }
    if (amount >= 20)
    {
        note20 = amount / 20;
        amount -= note20 * 20;
        printf("\nnote20 : %d", note20);
    }
    if (amount >= 10)
    {
        note10 = amount / 10;
        printf("\nnote10 : %d", note10);
    }
    else
    {
        printf("\nThank You :)");
    }
}