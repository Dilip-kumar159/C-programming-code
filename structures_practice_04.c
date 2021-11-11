// Program to display the date and compare the date.
# include<stdio.h>
    typedef struct date
    {
        int date;
        int month;
        int year;
    } date ;
    void display(date d1)
    {
        printf("The date is : %d/%d/%d \n",d1.date, d1.month,d1.year);
    }
    int datecmp(date d1,date d2)
    {
        if(d1.year>d2.year)
        {
            return 1;
        }
        if (d1.year<d2.year)
        {
            return -1;
        }
        if (d1.month>d2.month)
        {
            return 1;
        }
        if (d1.month<d2.month)
        {
            return -1;
        }
        if (d1.date>d2.date)
        {
            return 1;
        }
        if (d1.date<d2.date)
        {
            return -1;
        }
        return 0;

    }
int main()
{
    date d1 = {4, 2, 2001};
    date d2 = {4, 2, 2001};
    display(d1);
    display(d2);
    int a = datecmp(d1,d2);
    printf("The comparison of both the date is %d", a);
    return 0;
}