// illustrating the call by value 
# include<stdio.h>
int sum(int a, int b);
int main()
{
    int a=10,b=10;
    printf("The value of a and b is %d and %d\n",a,b);
    printf("The sum of 10 + 10 is %d\n",sum(a,b));
    printf("The value of and a and b after function call %d and %d\n",a,b);
    return 0;
}
int sum(int a, int b)
{   
    int c;
    c = a + b;
    a = 500; // here the value of a and b will not be changed ,
    b = 500;  // because main function already copied a = 10 and b=10
    return c;  // here in sum function value will not change !!!
                // this is call by value 
}


            // BUT THIS CODE WILL RUN 
// int sum(int a, int b)
// {
//     int c;
//     a = 500; 
//     b = 500; 
//     c = a + b;
//     return c;
             
// }
