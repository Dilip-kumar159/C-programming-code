// program to check whether a year is leap year or not
// ---> if a year is divisible by 400 then it is a leap year  example : 2000
// ---> if a year is not divisible by 400, but it is divisible by 100 then it is not a leap year
// ---> if a year is not divisible by 400 and not divisible by 100 , but divisible by 4 then it is a leap year example : 2012
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("Year %d is a leap year\n", year);
    }
   else if (year % 100 == 0)
    {
        printf("Year %d is  not a leap year\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("Year %d is a leap year\n", year);
    }

    else
    {
        printf("Year %d is not a leap year\n", year);
    }

return 0;
}