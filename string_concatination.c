# include<stdio.h>
# include<string.h>
int main()
{
    char st1[30] = "hello";
    char *st = "dilip";
    strcat(st1, st);
    printf("The concatenation string is : %s",st1);
    return 0;
}