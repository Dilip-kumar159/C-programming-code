//  Program to create an array of 10 integers and store the multiplication table of n by using scanf.

# include<stdio.h>

int main()
{
     int mul[10],n;
     printf("Enter whcih multiplication table need to print \n");
     scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
     mul[i] = n*(i+1);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d X %d =  %d  \n",n,i+1,mul[i]);
    }
    return 0;
}