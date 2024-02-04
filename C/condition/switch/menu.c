/*
    Author: Riya Patel
    Doc: 11, May 2023
    Objective: Menu
*/

#include <stdio.h>
int main()
{
    int select, menu;
    printf("\n1......GUJARATI");
    printf("\n2......PUNJABI");
    printf("\n3......KATHIYAVADI");
    printf("\nSelect the type of food you want: ");
    scanf("%d", &menu);
    

    switch(menu)
    {
        case 1:
            printf("\n1....phapda");
            printf("\n2....thepla");
            printf("\n3....dhokla");
            printf("\nEnter the item you want: ");
            scanf("%d", &select);
            

            switch(select)
            {
                case 1:
                    printf("\nSLEECTED PHAPDA");
                    break;

                case 2:
                    printf("\nSLEECTED THEPLA");
                    break;

                case 3:
                    printf("\nSLEECTED DHOKLA");
                    break;
            }
            break;

        case 2:
            printf("\n1....butter nan");
            printf("\n2....lassi");
            printf("\n3....panner butter masala");
            printf("\nEnter the item you want: ");
            scanf("%d", &select);

            switch (select)
            {
            case 1:
                    printf("\nSELECTED BUTTER NAN");
                    break;

            case 2:
                    printf("\nSELECTD LASSI");
                    break;

            case 3:
                    printf("\nSELECTD PANNER BUTTER MASALA");
                    break;
            }
            break;

        case 3:
            printf("\n1....sev tameta");
            printf("\n2....khichdi");
            printf("\n3....chas papad");
            printf("\nEnter the item you want: ");
            scanf("%d", &select);

            switch (select)
            {
            case 1:
                    printf("\nSELECTED SEV TAMETA");
                    break;

            case 2:
                    printf("\nSELECTED KHICHDI");
                    break;

            case 3:
                    printf("\nSELECTED CHAS PAPAD");
                    break;
            }
            break;
    }
}