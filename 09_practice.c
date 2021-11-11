// calculating income tax and percentage 
# include<stdio.h>

int main()
{
    int tax = 0, income;
    printf("Enter your income\n");
    scanf("%d",&income);
    
    if(income>=250000 && income<=500000)
    {
        tax+= 0.05 * (income - 250000);
    }
       if(income>=500000 && income<=1000000)
       {
            tax+= 0.20 * (income - 500000);
       }
          if(income>=1000000)
          {
              tax+= 0.30 * (income - 1000000);
          }
          printf("your income tax payable amount is %d ",tax);
    return 0;
}