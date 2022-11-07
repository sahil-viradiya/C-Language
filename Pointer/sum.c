#include <stdio.h>
// int c;
int add(int a, int b)
{
    // int a,b;
    int c = a + b;
    // printf("Sum is %d", c);
    return c;
}
int main()
{
    int p, q, r, ans;
    int (*sum)(int,int);

    printf("Enter Value Of P & Q :");
    scanf("%d %d", &p, &q);
    sum = add;
    ans = (*sum)(p, q);
    // sum=(add)(p, q);
    printf("Sum is %d", ans);
    return 0;
}