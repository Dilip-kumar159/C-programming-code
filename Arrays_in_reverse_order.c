# include<stdio.h>

int main()
{
    int arr[10];
      
    for (int j = 1; j <10; j++)
    {
        printf("Enter the ten  elements : %d \n",j);
        scanf(" %d ", &arr[j]);    
    }
     
    
    
       printf("Elements before reversing the order \n");
    for(int i=0;i<10;i++)
            
    {
        printf(" %d ",arr[i]);

    }
      printf("\n");

            printf("Elements after reversing the order \n");

    for(int i=9;i>=0;i--)
        

    {
        printf(" %d ",arr[i]);
    }

    return 0;


}