# include<stdio.h>

int main()
{
    // char ptr[] = "Dilip"; // If i give like ptr[] in this i can't replace.
    char *ptr = "I was"; // But if i declare using character pointer then i can,
     ptr = "Dilip Kumar";  // replace using another name... that is the use of pointer.
    printf("%s",ptr);

    return 0;
}