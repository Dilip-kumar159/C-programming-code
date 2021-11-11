// coding functions of sum and product
# include<stdio.h>
int sum(int a,int b);
float product(int x,int y);
int main()
{
    int result;
    result = sum(10,20);
    printf("The sum of a and b are %d\n",result);
    int z;
    z = product(10,20);
    printf("The product of x and y are %d\n",z);
    return 0;
}
int sum(int a,int b)
{
    int result;
    result = a + b;
    return result;
}
float product(int x , int y)
{
    int z;
    z = x * y;
    return z;
}