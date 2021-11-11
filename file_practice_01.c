# include<stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("enter which table you need to print\n");
    scanf("%d",&num);
    ptr = fopen("multiplication.txt","w");
    for (int i = 1; i <=10; i++)
    {
        fprintf(ptr,"%d X %d = %d\n",num,i,(num*i));
    }
    fclose(ptr);
    printf("successfully %d table is printed in the txt file\n",num);

    return 0;
}