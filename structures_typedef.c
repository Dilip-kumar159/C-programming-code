# include<stdio.h>
# include<string.h>
    
typedef  struct employee // Typedef use to create a alias name,
    {                   // Instead of writing a strucy employee we can just use emp.
        int code;
        float salary;
        char name[10];
    } emp;   // --> like this in structure.

    void show(emp emp1)
    {
        printf("The employee code is : %d\n",emp1.code);
        printf("The employee code is : %f\n",emp1.salary);
        printf("The employee code is : %s\n",emp1.name);
        emp1.code = 102;
    }                  

int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    ptr->code = 101;
    ptr->salary = 1234.3443;
    strcpy(ptr->name,"Dilip");

    printf("%d\n", e1.code);
    printf("%f\n",e1.salary);
    printf("%s\n",e1.name);

    show(e1);
    return 0;
}