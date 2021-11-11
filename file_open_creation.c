# include<stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("sample.txt","r"); //--> r for reading a file. 
    ptr = fopen("sample.txt","w"); //--> w for writing a file.
    return 0;
}   