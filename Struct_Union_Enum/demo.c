#include<stdio.h>
#include<string.h>

struct Student
{
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_cource[50];
    char stu_city[50];
    char stu_std[30];
    char stu_school[50];
}s1;

void main()
{
    printf("Enter Stuent Id : \n");
    scanf("%d",&s1.stu_id);

    printf("Enter Student Age : \n");
    scanf("%d",&s1.stu_age);

    fflush(stdin);
    printf("Enter Student Name :\n");
    gets(s1.stu_name);

    printf("Enter Student Cource : \n");
    gets(s1.stu_cource);

    printf("Enter Student City : \n");
    gets(s1.stu_city);

    printf("Enter Student Std : \n");
    gets(s1.stu_std);

    printf("Enter Student School : \n");
    gets(s1.stu_school);
    printf("***************************\n");


     printf("%d \n",s1.stu_id);
     printf("%d \n",s1.stu_age);
     puts(s1.stu_name);
     puts(s1.stu_cource);
     puts(s1.stu_city);
     puts(s1.stu_std);
     puts(s1.stu_school);

}
