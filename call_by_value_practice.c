// program to change the value of a variable to the ten times of its current 
// value,, write a function and pass the call by value.
# include<stdio.h>
int value(int a)
{
    int x=2,c;
    c= x * 10; // if we create another variable in function it will not 
                // produce that output instead it will take from main 
// return c; until we declare a return type value like it is returning c.
    int sum;
    sum = (a) * 10;
    return sum;
}
int main()
{
    int a=4;
    // printf("Enter the number\n");
    // scanf("%d",&a);
    printf("The number after becoming its 10 times is %d\n",value(a));
    return 0;
}