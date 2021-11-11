// Using a arrow operator 
# include<stdio.h>
# include<string.h>
    struct student
    {
        int reg;
        float percentage;
        char name[10];
    };
    
int main()
{
    struct student s1;
    struct student *ptr;

    ptr = &s1;
    (*ptr).reg = 2001;
    (*ptr).percentage = 98.67;
    strcpy((*ptr).name,"Dilip");

    
    printf("%d\n",s1.reg);
    printf("%f\n",s1.percentage);
    printf("%s\n",s1.name);

        // Using arrow operator
    ptr->reg = 2001;
    ptr->percentage = 98.67;
    strcpy(ptr->name,"Dilip");


    printf("using arrow opertor %d\n",ptr->reg);
    printf("using arrow opertor %f\n",ptr->percentage);
    printf("using arrow opertor %s\n",ptr->name);


    return 0;
}