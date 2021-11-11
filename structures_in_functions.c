// Using  structures in functions.
# include<stdio.h>
# include<string.h>
    struct employee
    {
        int code;
        float salary;
        char name[10];
    };
    void show(struct employee emp)
    {
        printf("The employee code is : %d\n",emp.code);
        printf("The employee code is : %f\n",emp.salary);
        printf("The employee code is : %s\n",emp.name);
        emp.code = 102; // Here if i change any thing in the show() it will not change,
    }                   // because it sends the copy not the reference.
int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).code = 101; This is also works and the next line of code also works. 
    ptr->code = 101; // -> this is calles arrow operator.
    ptr->salary = 1021.4567;
    strcpy(ptr->name,"Dilip");
    show(e1);
      printf("The employee code is : %d\n",e1.code); // Demo to show that value of code,
    // printf("%d", e1.code);           will not change in e1.code.
    return 0;
}