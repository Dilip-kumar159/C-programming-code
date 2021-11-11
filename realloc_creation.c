// Using a dynamic memory allocation print the multiplication table of 7 x 10,
// upto 10 and use realloc function to extend till 7 x 15.
# include<stdio.h>
# include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(10 * sizeof(int));
    int num = 7;
    printf("***** Multiplication Table of 7 to 10  *****\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", num, i , (num*i));
    }

    ptr = realloc(ptr,15 * sizeof(int));
    printf("***** Multiplication Table of 7 to 15  *****\n");
    for (int i = 1; i <= 15; i++)
    {
        printf("%d X %d = %d\n", num, i , (num*i));
    }
    
    return 0;
}