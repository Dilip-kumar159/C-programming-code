# include<stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("getc.txt","r");
    // // fgetc is for reading a file
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));
    // printf("The value of character is %c\n",fgetc(ptr));

    ptr = fopen("putc.txt","w");
    putc('c',ptr);
    putc('s',ptr);
    putc('i',ptr);
    fclose(ptr);

    return 0;
}