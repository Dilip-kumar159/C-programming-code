// Creating a structure in arrays.
# include<stdio.h>
    struct employee 
    {
        int eid;
        float salary;
        char name[10];
    };
    
int main()
{
    struct employee dilip = {101,4567.8760,"Dilip"};

    
    printf("Employee Id is %d\n",dilip.eid);
    printf("Employeee salary is %.3f\n",dilip.salary);
    printf("Employee name is %s\n",dilip.name);

    return 0;
}