// Creating a structure
# include<stdio.h>
# include<string.h>
    struct employee
    {
        int Eid;
        float salary;
        char name[10];
    };
    
int main()
{
    struct employee e1;
    e1.Eid = 1001;
    e1.salary = 43000.4332;
    strcpy(e1.name , "Dilip");
    printf("Employee Id is %d\n",e1.Eid);
    printf("Employeee salary is %.3f\n",e1.salary);
    printf("Employee name is %s\n",e1.name);

    return 0;
}