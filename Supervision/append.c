#include<stdio.h>
#include<string.h>
void main(){
    FILE *fappend;
    char str[500];

    fappend = fopen("append.txt","a");

    printf("Enter your msg :\n");
    gets(str);

    fprintf(fappend, "%s",str);
    printf("Your message is appended in data.txt file.");
    fclose(fappend);
}