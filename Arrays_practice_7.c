# include<stdio.h>

int main()
{
    int a[10] = {2,3,4,5,6,7,8,9,10,1};
    int i, pos = 0, neg = 0, odd = 0, even = 0;
    for(int i=0;i<10;i++)
    {
        a[i] < 0 ? (neg++) : (pos++) ;
        a[i] % 2 ? (odd++) : (even++) ;
    }
    printf("The number of positive elements %d = %d  \n",pos,a[i]);
    printf("The number of negative elements %d = %d  \n",neg,a[i]);
    printf("The number of odd elements %d = %d  \n",odd,a[i]);
    printf("The number of even elements %d = %d  \n",even,a[i]);

    return 0;
}