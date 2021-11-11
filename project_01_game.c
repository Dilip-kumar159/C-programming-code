#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, guess_num = 1;
    srand(time(0));  
    number = rand() % 100 + 1; // generates a random number between 1 to 100
    // printf("The number is %d\n",number);
    // add loop and run until the loop gets satisfy
    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower the number please!!\n");
        }
        else if (guess < number)
        {
            printf("Higher the number please!!\n");
        }
        else
        {
            printf("you have guess the number in %d attempts\n", guess_num);
        }
        guess_num++;
    } while (guess != number);

    return 0;
}