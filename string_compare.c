# include<stdio.h>
# include<string.h>
int main()
{
    char st1[30] = "hello";
    // char *st = "dilip"; // If the first string is greater than the second string then returns 1.
    //  char *st = "helzo";    // If the second string is greater than the first string then returns -1.
      char *st = "hello";    // If the first string is equal to  the second string then returns 0.
    int val = strcmp(st1, st); 
    printf("The concatenation string is : %d",val); 
    return 0;
}