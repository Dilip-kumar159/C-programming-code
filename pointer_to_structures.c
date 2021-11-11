// Using pointers in structures.
# include<stdio.h>
# include<string.h>
    struct employee
    {
        int code;
        float salary;
        char name[10];
    };
int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101; This is also works and the next line of code also works. 
    ptr->code = 101; // -> this is calles arrow operator.
    printf("%d", e1.code);
    return 0;
}