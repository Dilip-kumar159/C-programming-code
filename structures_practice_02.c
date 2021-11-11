// Write a function sumvector which rerurns the sum of two vectors.
// Note : vectors must be two dimensional.
# include<stdio.h>
 typedef   struct vector
    {
        int x;
        int y;
    } vector;
    vector sumvector(vector v1, vector v2) // Here instead of writing struct vector.
    {                        //  i just did typedef so i can write my custom structre name.
        vector result;
        result.x = v1.x + v2.x;
        result.y = v1.y + v2.y; 
        return result;

    }
int main()
{
    struct vector v1,v2,sum;
    v1.x = 100;
    v1.y = 200;
    printf("V1 X dim is %d and Y dim is %d \n",v1.x , v1.y);

    v2.x = 700;
    v2.y = 600;
    printf("V2 X dim is %d and Y dim is %d \n",v2.x , v2.y);
    
    sum = sumvector(v1, v2);
        printf("Sum of X dim is %d and Sum of Y dim is %d \n",sum.x , sum.y);
    return 0;
}