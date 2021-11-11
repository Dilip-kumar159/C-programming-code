// program to find wheather a student is pass or fail, it requires 40% to atleast
// 33% to pass in all the subject !!
#include <stdio.h>

int main()
{
   int maths, science, english;
   float total;
   printf("Enter maths marks \n ");
   scanf("%d", &maths);
   printf("Enter maths marks \n ");
   scanf("%d", &science);
   printf("Enter maths marks \n ");
   scanf("%d", &english);
   total = (maths + science + english) / 3;

   if ((total <= 40) || maths < 33 || science < 33 || english < 33)
   {
      printf("Your percentage is %f  and you have failed !!\n", total);
   }
   else
   {
      printf("Your percentage is %f and you have passed \n", total);
   }
   return 0;
}