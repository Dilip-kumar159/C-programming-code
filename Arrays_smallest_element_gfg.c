# include<stdio.h>
int smallest(int arr[] , int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] < min)
        min = arr[i];

    }
        return min;
    
}
int main()
{
    int array[] = {10,-120,30,40,-50,-70,5};


      for (int i = 0; i < 6 ; i++)
        {
            printf("The elements are %d is :  %d\n\n",i,array[i]);
        }
  
    printf("The smallest element in an array %d\n",smallest(array,7));

    return 0;
}