# include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("generated.txt","w");
    int number = 23;
    fprintf(ptr,"The number is %d\n ",number);
    fprintf(ptr,"Thanks for using this file",number);
    fclose(ptr);
    return 0;
}