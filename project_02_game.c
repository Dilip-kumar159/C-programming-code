//  Game of Snake, Water , Gun.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(char you, char comp)
{
    // This if statement is for draw that it indicates 0.
    if (you == comp)
    {
        return 0;
    }
    // The -1 is for loss and 1 is for win.
     if (you == 's' && comp == 'g')
    {
        return -1;
    }

    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

     if (you == 's' && comp == 'w')
    {
        return 1;
    }

    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

     if (you == 'g' && comp == 'w')
    {
        return -1;
    }

    else if(you == 'w' && comp == 'g')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Choose any one of these 's' for snake , 'w' for water , 'g' for gun \n");
    scanf("%c", &you);
    int result = game(you, comp);

    if (result == 0)
    {
        printf("Game is draw!\n");
    }
    else if (result == 1)
    {
        printf("You won the game!\n");
    }
    else
    {
        printf("You lost the game!\n");
    }
    printf("You choose %c and computer choose %c \n", you, comp);

    return 0;
}