/*
    Author: Riya Patel
    DOC: 31, May 2023
    Objective: marks

    ask user medium and marks of eng and percent
    MEDIUM : ?  ENG/GUJ/HIN
    ENGLISH : ?
    PERCENT : ?
    ENG : MINIMUM SCORE IN ENGLISH : 60 + MINIMUM PERCENT : 75
    GUJ/HIN : MINIMUM SCORE IN ENGLISH : 70 + MINIMUM PERCENT : 80

    DISPLAY ELIGIBLE OR NOT ELIGIBLE FOR ADMISSION.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char e[3] = "eng", h[3] = "hin", g[3] = "guj", medium[5];
    int Meng, english, hindi, per, gujarati;
    printf("Enter the medium you studies: ");
    scanf("%s", &medium);
    printf("Enter marks you obtainded in english subject: ");
    scanf("%d", &Meng);
    printf("Enter your percentage: ");
    scanf("%d", &per);
    english = strcmp(medium, e);
    if (english == 0)
    {
        if (Meng >= 60 && per >= 75)
        {

            printf("\nEligible for Addmission");
        }

        else
        {
            printf("\nNot Eligible");
        }
    }

    hindi = strcmp(medium, h);
    if (hindi == 0)
    {
        if (Meng >= 70 && per >= 80)
        {

            printf("\nEligible for Addmission");
        }
        else
        {
            printf("\nNot Eligible");
        }
    }

    gujarati = strcmp(medium, g);
    if (gujarati == 0)
    {
        if (Meng >= 70 && per >= 80)
        {

            printf("\nEligible for Addmission");
        }
        else
        {
            printf("\nNot Eligible");
        }
    }
    
}
