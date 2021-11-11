// Creation of malloc function
# include<stdio.h>
# include<stdlib.h>

int main()
{
     int *ptr;

    // printf("The size of the int is %d bytes\n",sizeof(int));
    // printf("The size of the float is %d bytes\n",sizeof(float));
    // printf("The size of the char is %d bytes\n",sizeof(char));
    // printf("The size of the long is %d bytes\n",sizeof(long));
    // printf("The size of the double is %d bytes\n",sizeof(double));

    // This malloc function helps to allocate a memory in heap 
    // which is dynamically allocated(Runtime).
    ptr = (int*)malloc(5 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element \n",i);
        scanf("%d",&ptr[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        printf("The value of  element %d is %d \n",i,ptr[i]);
        
    }
    return 0;
}