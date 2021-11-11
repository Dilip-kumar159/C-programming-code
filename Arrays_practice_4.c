//  Reversing the array element using functions
# include<stdio.h>
void reverse(int *arr, int n)
{
    for (int i = 0; i < n/2; i++) // Here n/2 is stop once it reaches the half of the element.
    {                               // if we give only n then it will reverse twice and gives the same answer.
        int temp;
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
}
int main()
{
    int arr[]= {10,20,30,40,50,60,70,80,90};
    printf("Before reversing the element in an array \n");
    for (int i = 0; i < 9; i++)
    {
        printf(" %d ",arr[i]);
    }
        printf(" \n ");

    reverse (arr,9);

    printf("After reversing the element in an array \n");

    for (int i = 0; i < 9; i++)
    {
        printf(" %d ",arr[i]);
    }

    return 0;
}