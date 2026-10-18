#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

int game(char you[10], char computer[10])
{
    int ret;
    char *a = "Rock" ,*b = "Paper",*c = "Scissors";
    ret = strcmp(you,computer);
    if(ret==0)
    {
        return -1;
    }
    else
    {
        if(you == 'a' && computer == 'b')
        {
            return 0;
        }
        else if(you == 'b' && computer == '*a')
        {
            return 1;
        }
        else if(you == 'a' && computer == 'c')
        {
            return 1;
        }
        else if(you == 'c' && computer == 'a')
        {
            return 0;
        }
        else if(you == 'b' && computer == 'c')
        {
            return 0;
        }
        else if(you == 'c' && computer == 'b')
        {
            return 1;
        }
    }
    
}

int main(void)
{
    int n,result;
    char you[10],computer[10];

    srand(time(0));
    n=rand()%100;

    if(n < 33)
    {
        char computer[10] = "Rock";
    }
    else if(n >= 33 && n < 66)
    {
        char computer[10] = "Paper";
    }
    else
    {
        char computer[10] = "Scissors";
    }

    printf("\n\n\n\n\n\n\n\n\t\t\t\tThe Rock Paper Scissors Game\n\n\n\n\n\n\n\n");
    printf("\tFor Rock ==> (Rock) / For Paper ==> (Paper) / For Scissors ==> (Scissors)\n");
    
    scanf("%s",you);

    result = game(you,computer);

    //If input's 1 Your's WIN!
    //If input's 0 Computer's WIN!
    //If input's -1 That's DRAW!

    if(result == -1)
    {
        printf("\n\n\t\t\tDRAW! Nobody won!\n");
    }
    else if(result == 1)
    {
        printf("\n\n\t\t\tCongratulations! You won!\n");
    }
    else
    {
        printf("\n\n\t\t\tOh No! You lost!\n");
    }

    printf("\t\t\t\tYour's Choice: %c \tComputers Choice: %c",*you,computer);
    return 0;
}