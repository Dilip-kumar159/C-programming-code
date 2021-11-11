# include<stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        if(i==8)
        break;  // In break keyword it will print till seven (7).
        printf(" %d ",i);
    }
               printf("\n");

    for(int j = 1; j <= 10; j++)
    {
        if(j==8)
        continue; // In continue keyword it will print all the numbers from 1 to 10,,but skips 8.
        printf(" %d ",j);
    }

    return 0;

}