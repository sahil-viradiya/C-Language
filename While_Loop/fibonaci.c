// #include <stdio.h>

// void main()

// {
//     int num, t1 = 0, t2 = 1, t3 = 0;

//     printf("Enter Number : ");
//     scanf("%d", &num);

//     while (num >= t3)
//     {
//         // printf(" %d,", t3);
//         t1 = t2;
//         t2 = t3;
//         t3 = t1 + t2;
//         printf(" %d,", t3);
//     }
// }
#include <stdio.h>

int main(void) {
	
	int n, sum;
	
	//input value of n
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	//initialize sum with 0
	sum =0;
	
	//use formula to get the sum from 0 to n
	sum = n*(n+1)/2;
	
	//print sum 
	printf("sum = %d\n", sum);
	
	return 0;
}
