// Creaate an array of 10 numbers and verify using pointer airthmetic that (ptr +2) points to the third ,
// element where ptr is a pointer pointing to the first element of the array.
# include<stdio.h>

int main()
{
    int arr[10];
    // int *ptr = &arr[0];
    int *ptr = arr;
    ptr = ptr + 2;
    if(ptr==&arr[2])
    {
        printf("The value is stored in same address in memory location \n");
    }
    else
    {
        printf("The value is not stored in same address in memory location \n");
    }
    return 0;
}