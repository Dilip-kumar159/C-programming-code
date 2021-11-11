# include<stdio.h>
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        
            max = arr[i];
    }
        arr[0] = 999;  // We can change here also because it is a call by reference!!
            return max;
}
int main()
{
    int arr[] = {1234,1000,78,65,45,889};
    // int n = sizeof(arr) / sizeof(arr[0]); optional
    
    printf("Largest element in an array is %d\n",largest(arr,6));
        // for (int i = 0; i < 6 ; i++)
        // {
        //     printf("The elements are %d is :  %d\n",i,arr[i]);
        // }
        
    return 0;
}