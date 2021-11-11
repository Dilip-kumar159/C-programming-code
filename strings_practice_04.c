// Encrypting the message through a program.
# include<stdio.h>
    void encrypt(char *c)
    {
       char  *ptr = c;
        while (*ptr!= '\0')
        {
            *ptr = *ptr + 1;
            *ptr++;
        }
        
    }
int main()
{
    char st[] = "I Dilip How Are You ?";
    encrypt(st);    
    printf("encrypted string is : %s",st);
    return 0;
}