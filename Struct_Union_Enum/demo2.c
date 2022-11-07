#include <stdio.h>

struct Employe
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    int emp_role;
    char emp_city[50];
    char emp_ex[50];
    char emp_compny_name[50];
} emp[50];

void main()
{
    int n;
    printf("Enter Employee Size \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Employee Id : \n");
        scanf("%d", &emp->emp_id);

        fflush(stdin);
        printf("Enter Employee Name : \n");
        gets(emp->emp_name);

        printf("Enter Employee Age :");
        scanf("%d", &emp->emp_age);

        printf("Enter Employee role_number : \n");
        scanf("%d", &emp->emp_role);

        fflush(stdin);
        printf("Enter Employee City: \n");
        gets(emp->emp_city);

        printf("Enter Employee ex...\n");
        gets(emp->emp_ex);

        printf("Enter employee compony name :");
        gets(emp->emp_compny_name);
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d \n", emp->emp_id);
        puts(emp->emp_name);
        printf("\n");
        printf("%d \n", emp->emp_age);
        printf("%d \n", emp->emp_role);
        puts(emp->emp_city);
        printf("\n");
        puts(emp->emp_ex);
        printf("\n");
        puts(emp->emp_compny_name);
        printf("\n");
    }
}