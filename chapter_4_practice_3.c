# include<stdio.h>

int main()
{
    int i=1,sum=0,n=10;
     printf("The sum of first 10 natural number using while loop\n");
     while(i<=n)
     {
         sum+=i;
         i++;
         printf("%d\n",sum);
        
     }
      
   /*  printf("The sum of first 10 natural number using for loop\n");
    for ( i = 1; i <=n; i++)
    {
         sum+=i;
    } 
      printf("%d\n",sum); */
  /*  printf("The sum of first 10 natural number using do while loop\n");
    do
    {
        sum+=i;
        i++;
    } while (i<=n);
    printf("%d\n",sum);
    */
    
    return 0;
}