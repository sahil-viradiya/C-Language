#include <stdio.h>

void main()
{
    int price, salePrice;

    printf("Enter Price : ");
    scanf("%d", &price);
    printf("Enter Sales Price :");
    scanf("%d", &salePrice);

    if (price < salePrice)
    {
        printf("Profit");
    }
    else if (price > salePrice)
    {
        printf("Loss");
    }
    else
    {
        printf("No profit or no loss");
    }
}