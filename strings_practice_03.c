// Function to slice a string , it should change the original string,
// and that will be the sliced string ,take m and n as the start and ending 
// postion for slice
# include<stdio.h>

void slice(char *st, int m, int n)
{
    int i = 0;
    while ((m+i)<n)
    {
        st[i] = st[i+m];
        i++;
    }
     st[i] = '\0';

    
}
int main()
{
    char st[] = "Dilipkumar";
    slice(st,5 , 10); // Slice means breaking the string and printing whaterver the user 
    printf("%s",st); // required to print in the console.
    return 0;
}