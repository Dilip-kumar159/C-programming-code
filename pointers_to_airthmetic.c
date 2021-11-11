# include<stdio.h>

int main()
{
    // int i=4;
    // int *ptr = &i;
    // printf("The value of i is %d\n",ptr);
    // ptr++; // ptr=ptr + 1 ,here it pointers stores the values or address 
    // // in contigous manner eg: address is 56667 then it will be 56671 
    // // it stores 4 bytes of memory because data type is integer.
    // printf("The value of i is %d",ptr);

    // char i=4;
    // char *ptr = &i;
    // printf("The value of i is %d\n",ptr);
    // ptr++; // ptr=ptr + 1 ,here it pointers stores the values or address 
    // // in contigous manner eg: address is 56667 then it will be 56668 
    // // it stores 1 byte of memory because data type is char.
    // printf("The value of i is %d",ptr);

    double i=4;
    double *ptr = &i;
    printf("The value of i is %d\n",ptr);
    ptr++;
    // ptr++; // ptr=ptr + 1 ,here it pointers stores the values or address 
    // in contigous manner eg: address is 56667 then it will be 56675
    // it stores 8 bytes of memory because data type is double.
    printf("The value of i is %d",ptr);

    return 0;
}