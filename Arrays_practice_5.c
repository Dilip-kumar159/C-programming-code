//  Create an array of size M X N containing multiplication table of the numbers 2,7,9 respectively.
# include<stdio.h>
 void print(int *mul, int num, int n)
 {
     printf("The multiplication table of %d \n",num);
     for (int i = 0; i < n; i++)
     {
         mul[i] = num *(i+1);
         printf("%d X %d = %d\n",num,i+1,mul[i]);
     }
     printf("\n********************************************\n\n");
     
 }
int main()
{
    int mul[5][10];
    print(mul[0], 2, 10);
    print(mul[1], 7, 10);
    print(mul[2], 9, 10);
    print(mul[3], 18, 10);
    print(mul[4], 20, 10);



    return 0;
}  