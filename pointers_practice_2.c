#include <stdio.h>
void printAdd(int a)
{
    printf("The address of variable a is  %d\n", &a);
     printf("The value of variable a is  %d\n", a);
    //  prints the same value which is in main that is i=4 ,
    // but the address of the same variable which passes through the, 
    // main function to printadd function is different because,
    // copies only the value, and stores in different address in memory block.
}

int main()
{
    int i = 4;
    printf("The value of varaiable i is %d\n", i);
    printAdd(i);
    printf("The address of  variable i is %d\n", &i);

    return 0;
}
