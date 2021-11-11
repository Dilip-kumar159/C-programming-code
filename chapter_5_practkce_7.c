// program to convert celsius to fahrenheit
# include<stdio.h>
float convert(int x);
int main()
{
     float c;
    c=convert(37);
    printf("conversion from celsius to fahrenheit %f ",c);
    return 0;
}
float convert(int x)
{
     float far, celsius=39;
     far = (celsius * 9 / 5) + 32 ;
     return far;
}