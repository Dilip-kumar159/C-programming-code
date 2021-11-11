// Printing the address of variable and creating the pointer of integer type  
# include<stdio.h>

int main()
{
    int a =40;
    int *ptr;
    ptr= &a;
    printf("The address of a is %u\n",&a); // here %d or %u both will work.
     printf("The address of a is %u\n",ptr);
    printf("The value of a is %d\n",*ptr);
    printf("The value of a is %u",*(&a));
    return 0;
}