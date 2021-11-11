# include<stdio.h>

int main()

{

// Pattern printing  of 5 number of lines   
            //       * * * * * 
            //       * * * *
            //       * * * 
            //       * * 
            //       *

    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
       {
            printf(" * ");

        }
          printf("\n");

    }

        // Pattern printing  of 5 number of lines   
            //       *  
            //       * * 
            //       * * * 
            //       * * * *
            //       * * * * *
    // int n;
    // printf("Enter the number of lines : ");
    // scanf("%d",&n);
    // for(int i = 1; i<=n; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //    {
    //         printf(" * ");

    //     }
    //       printf("\n");
    // }
    return 0;
}