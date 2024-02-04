/*
    Author : Riya Patel
    DOC : 21 June,2023
    Objective : Rock , Paper and scissor
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, u, computer = 0, user = 0;
    printf("\n 1 is for rock");
    printf("\n 2 is for paper");
    printf("\n 3 is for scissor");
    for (int i = 1; i < 10; i++)
    {
        printf("\n Enter a number : ");
        scanf("%d", &u);
        a = rand() % 3 + 1;

        if (a == u)
        {
            printf("\n you both have choosen same ");
        }
        else if (u == 1 && a == 2)
        {
            printf("\n Computer has choosen paper ");
            printf("\n Computer Wins");
            computer++;
        }
        else if (u == 1 && a == 3)
        {
            printf("\n Computer has choosen scissor");
            printf("\n Computer Wins");
            computer++;
        }
        else if (u == 2 && a == 1)
        {
            printf("\n You have won ");
            user++;
        }
        else if (u == 2 && a == 3)
        {
            printf("\n Computer has choosen scissor");
            printf("\n Computer Wins");
            computer++;
        }
        else if (u == 3 && a == 1)
        {
            printf("\n Computer has choosen rock");
            printf("\n Computer Wins");
            computer++;
        }
        else if (u == 3 && a == 2)
        {
            printf("\n You have won ");
            user++;
        }

        printf("\n YOUR SCORE : %d", user);
        printf("\n COMPUTER'S SCORE : %d", computer);
    }
    if (user > computer)
    {
        printf("\n YOU WON");
    }
    else if (user == computer)
    {
        printf("\n TIE");
    }
    else
    {
        printf("\n COMPUTER WON");
    }
}