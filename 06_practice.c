#include<stdio.h>

int main()
{
    int a=3.4,b=5,d=4;
    int c= 10 + 5 + d;
    int x=10,y=5;
    int z=(x*y)+(x/y); // if operator precedence are same then it follows assosciative property that is left to right
    // 10*5 + 10/5
    // 50 + 2
    // 52 is the right answer  
    printf("The sum of 10+5+d is %d\n ",c);
    printf("The sum of (x*y)+(x/y) is %d ",z);
    return 0;
}