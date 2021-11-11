# include<stdio.h>
// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n",i+1,*(ptr+i)); 
         
//     }
    
// }
    // ***** Another way of repersenting pointers to functions
    void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n",i+1,ptr[i]); 
    }
      ptr[2] = 55555;
}
int main()
{
    int arr[]={2,3,45,65,76,87};
    printArray(arr, 6);
    printf("%d",arr[2]);
    return 0;
}