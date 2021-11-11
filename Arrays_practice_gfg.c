// Using loops reversing an element and using function reversing an element
# include<stdio.h>
    
    int reverse_array(int arr[] , int start , int end)
    {
      while (start < end)
    {
      
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
      }
    }
    
    int print(int arr[], int size)
    {
      
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
      printf("\n");

    }
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Elements in an array before reversing \n");
    
    print(arr,10);

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    //   printf("\n");

    // printf("Elements in an array after reversing \n");

    // int j;
    //   for (int j = 9; j >= 0; j--)
    //   {
    //       printf("%d ",arr[j]);
    //   }
      
    //   printf("\n");

    printf("Elements in an array after reversing  through functions\n");   
    reverse_array(arr,0,9);
        print(arr,10);


    //   for (int i = 0; i < 10; i++)
    // {
    //     printf("%d ",arr[i]);
    // }
    //   printf("\n");


    return 0;
}