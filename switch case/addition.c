#include<stdio.h>

// void main()
// {
//     int ch,a,b,c;

//     printf("\n 1.addition \n 2.multiplication \n 3.division \n 4.substration \n 5.modulo \n");
//     printf("\n Enter Valid Choise : ");
//     scanf("%d",&ch);

    
    
//     printf(" \n Enter value of a and b :");
//     scanf("%d %d",&a,&b);

//     switch (ch)
//     {
//         case 1 : c = a+b;
//                 printf("Addition is  :%d ",c);
//                 break;
//         case 2 : c = a*b;
//                 printf("Multiplucation is  :%d ",c);
//                 break;
//         case 3 : c = a/b;
//                 printf("divisoion is %d :",c);
//                 break;
//         case 4 : c = a-b;
//                 printf("substration is  : %d",c);
//                 break;
//         case 5 : c = a%b;
//                 printf("Modulo is  : %d",c);
//                 break;      
//         default:
//                 printf("Invalid choise!!!!!");
//                 break;
//     }


// }
void main()
{
    char ch;
    int a,b,c;

    printf("\n + \n * \n / \n - \n Modulo \n");
    printf("\n Enter Valid Choise : ");
    scanf("%c",&ch);

    
    printf(" \n Enter value of a and b :");
    scanf("%d %d",&a,&b);
    

    switch (ch)
    
    {
        case '+' : c = a+b;
                printf("Addition is  :%d ",c);
                break;
        case '*' : c = a*b;
                printf("Multiplucation is  :%d ",c);
                break;
        case '/' : c = a/b;
                printf("divisoion is %d :",c);
                break;
        case '-' : c = a-b;
                printf("substration is  : %d",c);
                break;
        case '%' : c = a%b;
                printf("Modulo is  : %d",c);
                break;      
        default:
                printf("Invalid choise!!!!!");
                break;
    }


}
