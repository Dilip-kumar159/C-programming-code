// using any one library functions to perform area of square
# include<stdio.h>
# include<math.h>
int main()
{
    int side;
    printf("Enter the value side\n");
    scanf("%d",&side);
    printf("The sides of square is %f\n",pow(side,2));//here %f is used because pow is always double
    return 0;
}