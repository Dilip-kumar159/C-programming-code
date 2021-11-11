# include<stdio.h>
# include<string.h>
int main()
{
    char *st = "circumstances";
    char st1[30];
    strcpy(st1,st);
    printf("The copy string : %s",st1);
    return 0;
}