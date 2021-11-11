#include <stdio.h>

int main()
{
    int marks[5];
    int *ptr;
    // ptr =  &marks[0]; Both are same and works fine
    ptr = marks;
    for (int i = 0; i < 5; i++)
{
        printf("Enter the marks %d \n", i + 1);
        scanf("%d", ptr);
        ptr++;

}   

    for (int i = 0; i < 5; i++)
{
   printf("The value of a marks of a student %d is %d \n", i + 1, marks[i]);
}

    return 0;
}