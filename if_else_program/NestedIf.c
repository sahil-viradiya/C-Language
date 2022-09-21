#include<stdio.h>

// void main()
// {
    // int a,b,c;

    // printf("Enter Value of a,b,c :");
    // scanf("%d %d %d",&a, &b ,&c);

    // if (a>b)
    // {
    //     if (a>c)
    //     {
    //         printf("A is Maximum ");
    //     }
    //     else
    //     {
    //         printf("c is maximum");
    //     }
        
       
    // }
    // else if(b>c)
    // {
    //     printf("b is maximum");
    // }
    // else
    // {
    //     printf("c is maximum");
    // }
    // int a,b,c,d;


    // printf("Enter Value of a,b,c,d :");
    // scanf("%d %d %d %d",&a, &b ,&c, &d);

    // if (a>b)
    // {
    //     if (a>c)
    //     {
    //         if (a>d)
    //         {
    //             printf("a is maximum");
    //         }
    //         else
    //         {
    //             printf("d is maximum");
    //         }
    //     }

    // }
    // else if (b>c)
    // {
    //     if (b>d)
    //     {
    //         printf("b is maximum");
    //     }
    //     else if(c>d)
    //     {
    //         printf("c is maximum");
    //     }
    //     else
    //     {
    //         printf("d is maximum");
    //     }
    // }
    // else if (c>d)
    //     {
    //     printf("c is maximum");
    //     }
    // else
    // {
    //     printf("d is maximum");
    // }

// }
    
void main()
{

    int age;

    printf("Enter Value of a,b,c,d :");
     scanf("%d",&age);

    if (age>=18)
    {
        if (age>=18 && age>60)
        {
            printf("you can get pensoin and you are aligible for vote ");
        }
        else
        {
            printf("you can aligible fo only vote");
        }
        
    }
    else
    {
        printf("you can not aligible fo only vote");
    }
    
}
    

    
   
    
    