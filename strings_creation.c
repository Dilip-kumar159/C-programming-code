# include<stdio.h>

int main()
{
    // char str[] = {'D','I','L','I','P','\0'}; // This is also runs and bit headache 


    // char str[] = "DILIP"; // This is the easy one,, and there is also one more 
    // char *ptr = str;       //convienent way 
    // while(*ptr!='\0')
    // {
     
    //   printf("%c",*ptr);
    //   ptr++;
    // }

        // The easy and widely used everywhere !!!

        // char *ptr = "DILIP is a good boy";
        // printf("%s",ptr);

        char ptr[] = "Dilip is a good boy";  //This also works.
        printf("%s",ptr);

    return 0;
}