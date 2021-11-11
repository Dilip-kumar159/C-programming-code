// Recursions  
# include<stdio.h>
int factorial(int n);
int main()
{
    int a = 6;
    printf("The factorial of %d is %d\n",a,factorial(a));   
    return 0;
}
int factorial(int n)
{
    printf("Calling factorial %d\n",n);
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return  n * factorial(n-1);
    }
}