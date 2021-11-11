# include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt","r");
    int num,num2;
    if (ptr==NULL)
    {
        printf("This file does not exist\n");
    }
    else
    {
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr); // For closing the file after reading it.
    printf("The value of num is %d \n",num);
    printf("The value of num2 is %d \n",num2);
    return 0;
    }
    
}
    
    