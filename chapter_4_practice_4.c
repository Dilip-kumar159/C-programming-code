# include<stdio.h>

int main()
{
    int i=1,n=7,factorial=1;
    // factorial of 5! = 1*2*3*4*5
   /* for(i=1;i<=n;i++)
    {
         factorial*=i;
    }
    printf("The factorial of %d is %d\n",n,factorial);   */
      
    //  using while loop
    while (i<=n)
    {
        factorial*=i;
    }
     printf("The factorial of %d is %d\n",n,factorial);   
    return 0;
}