# include<stdio.h>

int main()
{
    // ascii code a to z 97 to 122
    char ch;
    printf("Enter the characters\n");
    scanf("%c",&ch);
    if(ch<=122&&ch>=97)
    {
     printf("The alphabetic case %c is lower case\n",ch);
    }
    else
    {
       printf("The alphabetic case %c is not lower case\n",ch);
    }
    return 0;
}