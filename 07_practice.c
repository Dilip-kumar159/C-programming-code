// if else execution 
# include<stdio.h>

int main()
{
    int science,maths,english;
    float total;
    printf("Enter the maths marks\n");
    scanf("%d",&maths);
    printf("Enter the science marks\n");
    scanf("%d",&science);
    printf("Enter the english marks\n");
    scanf("%d",&english);
    total=(science+maths+english)/3;
    if((total>40)&&(science>=30)&&(maths>=30)&&(english>=30))
    {
        printf("The student got %f and he is passed\n",total);

    }
    else
    {
          printf("The student got %f and he is failed\n",total);
    }
    return 0;
}