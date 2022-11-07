#include <stdio.h>
#include<string.h>
void main()
{
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("abc.txt", "r");
    fp2 = fopen("xyz.txt", "w");
    if (fp1==NULL && fp2==NULL)
    {
        printf("Unable to file load");
    }
    
    while((ch = fgetc(fp1)) != EOF){
        fputc(ch, fp2);
    }
    printf("file copied!!!!!!");

    fclose(fp1);
    fclose(fp2);
 
}