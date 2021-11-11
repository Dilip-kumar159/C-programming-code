#include <stdio.h>
// void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int a = 10, b = 20;
    printf("The value of a and b before swap %d and %d \n", a, b);
    // wrong_swap(a,b) this will not swap
    swap(&a, &b); // It will work (swap) because of call by reference  
    printf("The value of a and b after swap %d and %d \n", a, b);
    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b =temp;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
