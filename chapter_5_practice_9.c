# include<stdio.h>

int main()
{
    int a=3;
    printf("%d %d %d",a,++a,a++);
    // ---> for a = 3, here in the printf the output will be 5 5 3 ,
    // ---> It depends upon the compiler ,in gcc compiler it works like this.
    // ---> because in printf the order of arguements will be taken from right to left.
    // ---> so first it will go and store in a++ then ++a and at last a.
    return 0;
}