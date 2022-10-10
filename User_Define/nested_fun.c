#include<stdio.h>
// void multi(int a,int b);
// void add(int a,int b)
// {
//     int sum;
//     sum = a+b;
//     printf("Addition is %d\n",sum);
//     multi(a,b);
// }
// void multi(int a,int b)
// {
//     int mul;
//     mul=a*b;
//     printf("Multiplication is %d",mul);
// }
// void main()
// {
//     int a,b;
//     printf("Enter Value A and B :\n");
//     scanf("%d %d",&a ,&b);
//     add(a,b);
// }



void add(int a){
    printf("%d \n",a);
    if(a<10){
        return add(a+1); //add(2)
    }
}
void main(){
    int i=1;
    add(i);
}