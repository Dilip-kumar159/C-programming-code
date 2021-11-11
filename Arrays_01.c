//  Write a program to accept marks of five students in an array and 
// print them to the screen 
# include<stdio.h>

int main()
{
   // int marks[5];    The basic way of printing the array 
    // marks[0] = 34;
    // marks[1] = 37;
    // marks[2] = 45;
    // marks[3] = 54;
    // marks[4] = 77;

    // printf("The marks is %d\n",marks[0]);
    // printf("The marks is %d\n",marks[1]);
    // printf("The marks is %d\n",marks[2]);
    // printf("The marks is %d\n",marks[3]);
    // printf("The marks is %d\n",marks[4]);

    // Commonly used method to declare and print the array

    int marks[5]; 
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks of a student %d : ",i+1);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks of a student is : %d\n",marks[i]);

    } 
      // To increase the readability of the program.
    
    return 0;
}