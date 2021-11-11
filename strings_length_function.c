//   Finding the length of the string 

# include<stdio.h>
# include<string.h>
int main()
{   
        char ch[30];
        printf("Enter the name : ");
        // scanf("%s",ch);
        gets(ch);
      printf("%c\n",ch);
    printf("\nThe length of string is : %d",strlen(ch));

    return 0;
}