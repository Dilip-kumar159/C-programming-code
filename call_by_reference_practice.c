// program to change the value of a variable to the ten times of its current 
// value,, write a function and pass the value by reference
# include<stdio.h>
int value(int *a)
{
    int sum;
    sum = (*a) * 10;
    return sum;
}
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("The number after becoming its 10 times %d\n",value(&a));
    return 0;
}