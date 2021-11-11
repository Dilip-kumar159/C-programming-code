//  Program to print the value of 'i' by using pointer to pointer variable type 
# include<stdio.h>

int main()
{
    int i= 5;
    int *ptr; // Creating pointer integer data type.
    ptr=&i;
    int **ptr_ptr; // Creating pointer to pointer integer data type.
    ptr_ptr=&ptr;
    printf("The value of I is %d\n",i); // This is not using pointer.
    printf("The value of I is %d\n",*ptr); // This is using pointer.
    printf("The value of I is %d\n",**ptr_ptr); // This is using ptr to ptr.
    return 0;
}