//  program to use a function which calculates sum and average of two numbers,
// use pointers and print the values of sum and average in main()
# include<stdio.h>


void sum_and_avg(int a, int b, int *sum, float *avg)
{
     *sum = a + b;
     *avg = (float)(*sum)/2;
}
int main()
{
    int i,j,sum;
    float avg;
    i =10;
    j = 10;
    sum_and_avg(i,j,&sum,&avg);
    printf("The sum is %d\n",sum);
    printf("The average is %.2f\n",avg);
    return 0;
    
}