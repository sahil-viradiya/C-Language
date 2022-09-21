#include<stdio.h>

void main()
{
    double value = 4150.12;
    printf("Double Value : %.2lf\n",value);

    //convert double value to integer
    int number;
    number = value;
    printf("integer value %d\n\n",number);//4150



    char vi = 's';
    printf("charcter value is %c\n",vi);

    //convert char to integer 
    int num;
    num = vi;
    printf("integer value is %d\n\n",num);

    int x = 10; // integer value 
    char y = 'm';// charcter value

    //convert to float value
    int z = x + y;
    float a = z;
    printf("int value %d,\tfloat value is %f",z,a);

}