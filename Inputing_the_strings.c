# include<stdio.h>

int main()
{
    int s[20];
    // printf("Enter your name : ");
    // scanf("%s",s);   // Here if i give input as Akshay Kumar it won't work, 
    // printf("Your name is %s",s); // ,,, inorder to print full name we use gets()

    // printf("Enter your name : ");
    // gets(s);   // Here if i give input as Akshay Kumar it works because, 
    // printf("Your name is %s",s); // instead of scanf() i used gets().
    

        // Using puts() function,, it helps to move a cursor to the next line.

        
    printf("Enter your name : ");
    gets(s);   
    puts(s);
    //  printf("Your name is %s",s); // instead of scanf() i used gets().
    return 0;
}