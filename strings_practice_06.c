// Count the occurence of the given string.
# include<stdio.h>
    int occurence(char st[], char c)
    {
        char  *ptr = st;
        int count = 0;
        while (*ptr!='\0')
        {
            if(*ptr==c)
            {
            count++;
            }

          ptr++;
        }
          return count;
        
    }
int main()
{
    char st[] = "Dilip is a iron man";
    int count = occurence(st, 'i');
    printf("The occurance of given character is = %d",count);
    return 0;
}