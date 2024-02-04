/*
    Author: Riya Patel
    Doc: 18, May 2023
    Objective: checking year and dates in particular year
*/
#include <stdio.h>
#define MIN_YEAR 2010
#define MAX_YEAR 2021
int main()
{
    int jan = 1, dec = 12, month, year;
    printf("General well-being log\n");
    printf("=======================\n");
    while (1)
    {
        printf("\nset the year and month for well being log(YYYY MM): ");
        scanf("%d%d", &year, &month);

        if ((year >= MIN_YEAR) && (year <= MAX_YEAR) && (month >= jan) && (month <= dec))
        {
            printf("\n*** log date set! ***\n");
            switch(month)
            {
                case 1:
                    printf("\nLog starting date: %d-JAN-01\n",year);
                    break;
                case 2:
                    printf("\n Log starting date: %d-FEB-01\n",year);
                    break;
                case 3:
                    printf("\n Log starting date: %d-MARCH-01\n", year);
                    break;
                case 4:
                    printf("\n Log starting date: %d-APRIL-01\n", year);
                    break;
                case 5:
                    printf("\n Log starting date: %d-MAY-01\n", year);
                    break;
                case 6:
                    printf("\n Log starting date: %d-JUNE-01\n", year);
                    break;
                case 7:
                    printf("\n Log starting date: %d-JULY-01\n", year);
                    break;
                case 8:
                    printf("\n Log starting date: %d-AUGUST-01\n", year);
                    break;
                case 9:
                    printf("\n Log starting date: %d-SEP-01\n", year);
                    break;
                case 10:
                    printf("\n Log starting date: %d-OCT-01\n", year);
                    break;
                case 11:
                    printf("\n Log starting date: %d-NOV-01\n", year);
                    break;
                case 12:
                    printf("\n Log starting date: %d-DEC-01\n", year);
                    break;

                }
            break;
        }
        if ((year < MIN_YEAR) || (year > MAX_YEAR))
        {
            printf("\nERROR: The year must be between 2010 and 2021 inclusive");
        }
        if ((month < jan) || (month > dec))
        {
            printf("\nERROR: JAN.(1) - DEC.(12)");
        }
    }
}