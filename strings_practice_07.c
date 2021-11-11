// Program to check wheather a character is persent in a given string or not.
# include<stdio.h>
    int check(char st[], char c)
    {
        char *ptr = st;
        while (*ptr!='\0')
        {
            if (*ptr==c)
            {
                return 1;
            }
            *ptr++;
        }
        
    }
int main()
{
    char st[] = "Dilip159";
     if(check(st, 'i'))
     {
      printf("The given character is present in a string\n");
    }
    else
    {
          printf("The given character is not present in a string\n");
    }
    return 0;
}