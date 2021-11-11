// Decrypting the string using program.
# include<stdio.h>
    void decrypt(char *c)
     {
         char *ptr = c;
         while (*ptr!='\0')
         {
             *ptr = *ptr - 1;
             *ptr++;
         }
         
     }
int main()
{
    char st[] = "J!Ejmjq!Ipx!Bsf!Zpv!@";
    decrypt(st);
    printf("Decrypted string is : %s",st);
    return 0;
}