#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SnakeWaterGun(char you, char computer)
{
    if (you == computer)
    {
        return 0;
    }

    else if (you == 's' && computer == 'w' || you == 'w' && computer == "g" || you == "g" && computer == "s")
    {
        return 1;
    }

    else
    {
        return -1;
    }
}

int main()
{
    char you, computer;
    srand(time(0));
    int num = rand() % 100 + 1;

    if (num < 20)
    {
        computer = 's';
    }

    else if (num < 50)
    {
        computer = 'w';
    }

    else
    {
        computer = 'g';
    }

    printf("Enter 's' for snake 'w' for water 'g' for gun\n");
    scanf("%c", &you);

    int result = SnakeWaterGun(you, computer);

    if (result == 0)
    {
        printf("Game is a draw\n");
    }

    else if (result == 1)
    {
        printf("You won\n");
    }

    else
    {
        printf("You lost\n");
    }

    printf("You choosed %c and computer choosed %c", you, computer);
}