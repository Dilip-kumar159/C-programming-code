// Pointer is pointing to whole array 
# include<stdio.h>

int main()
{
    int i[10] = {10,20,30,40,50,60,70,80,90,100};
    int (*ptr)[10]= &i;
    printf("%d",**ptr);  // If i declared only ptr it points to the array[i],
    return 0;       // if i declare *ptr it gives the address of the array[i],
}               // if i declare **ptr it gives the value of the array of first element.