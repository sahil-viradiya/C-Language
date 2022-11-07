#include <stdio.h>
struct student
{
    char name[50];
    int roll_no;
    int gujarati, hindi, english, sanskrit, maths;
    int total;
    float persantaeg;
} s1[5];
void main()
{

    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("Enter Student name : \n");
        gets(s1[i].name);
        printf("Enter Five subject marks :\n");
        scanf("%d %d %d %d %d", &s1[i].english, &s1[i].gujarati, &s1[i].hindi, &s1[i].maths, &s1[i].sanskrit);
        
        s1[i].total = s1[i].english + s1[i].gujarati + s1[i].hindi + s1[i].maths + s1[i].sanskrit;
        printf("Total is %d \n",s1[i].total);
        s1[i].persantaeg=s1[i].total/5;
        printf("Persantage is : %f \n",s1[i].persantaeg);
    }
}
