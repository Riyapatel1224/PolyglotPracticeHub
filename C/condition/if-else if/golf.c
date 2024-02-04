/*
    Author: Riya Patel
    DOC: 5, May 2023
    Objective: golf
*/

#include<stdio.h>
void main()
{
    int par, stroke;
    printf("Enter par: ");
    scanf("%d", &par);
    printf("Enter a score : ");
    scanf("%d", &stroke);

    if(stroke==1)
    {
        printf("Hole in One");
    }
    else if((par-stroke)>2 )
    {
        printf("Eagle");
    }
    else if((par-stroke)>=1)
    {
        printf("birdie");
    }
    else if((par-stroke)==par)
    {
        printf("par");
    }
    else if((par-stroke)>=-1)
    {
        printf("Bogey");
    }
    else if((par-stroke)>=-2)
    {
        printf("Double bogie");
    }
    else 
    {
        printf("Go Home.....");
    }
}