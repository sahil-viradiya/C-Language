// #include<stdio.h>
// void add(int a){
//     printf("%d \n",a);
//     if(a<10){
//         return add(a+1); //add(2)
//     }
// }
// void main(){
//     int i=1;
//     add(i);
// }
#include<stdio.h>
int sum=0;
void array1(int array[],int pos,int size_array)
{
    
    if(pos == size_array){
        return;
    }
    sum=sum+array[pos];
   // printf("%d \n",array[pos]);
    // if (pos>=size_array)
    // {
    //     return;
    // }
    //return array1(array,pos+1,size_array);
    array1(array,pos+1,size_array);
   // return 0;
}
void main()
{
    int array[50],size_array;
    printf("Enter Size of Arrray : ");
    scanf("%d",&size_array);

    printf("Element of array is :");
    for (int i = 0; i < size_array; i++)
    {
        scanf("%d",&array[i]);
    }
    array1(array,0,size_array);
    printf("sum is %d",sum);

    
}

