/*
    Author : Riya Patel
    DOC : 11 July,2023
    Objective : posiNeg, OddEven , VovelConso
*/

#include <stdio.h>
void main()
{
    int ch, ch2[5], ch1[5], i1[5], i2[5],c1,c2;
    float f1[5], f2[5];
    printf("How you want your element to be present: ");
    printf("\n1....Normal");
    printf("\n2....Reverse");
    scanf("\n%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter your option");
        printf("\n1.....Float");
        printf("\n2.....Integer");
        printf("\n3.....Character");
        scanf("%d", &c1);
        switch (c1)
        {
        case 1:
            printf("\nEnter a 5 Float value : ");
            for (int i = 0; i < 5; i++)
            {
                scanf("\n%f", &f1[i]);
            }
            for (int i = 0; i < 5; i++)
            {
                printf("\n%f", f1[i]);
            }
            break;

        case 2:
            printf("\nEnter a 5 Integer value : ");
            for (int i = 0; i < 5; i++)
            {
                scanf("\n%d", &i1[i]);
            }
            for (int i = 0; i < 5; i++)
            {
                printf("\n%d", i1[i]);
            }
            break;

        case 3:
            printf("\nEnter a 5 Float value : ");
            for (int i = 0; i < 5; i++)
            {
                scanf("\n%c", &ch1[i]);
            }
            for (int i = 0; i < 5; i++)
            {
                printf("\n%c", ch1[i]);
            }
            break;
        }
        break;
    case 2:
        printf("\nenter your option");
        printf("\n1.....Float");
        printf("\n2.....Integer");
        printf("\n3.....Character");
        scanf("%d", &c2);
        switch (c2)
        {
        case 1:
            printf("\nEnter a 5 Float value : ");
            for (int i = 0; i < 5; i++)
            {
                scanf("\n%f", &f1[i]);
            }
            for (int i = 4; i >= 0; i--)
            {
                printf("\n%f", f1[i]);
            }
            break;

        case 2:
            printf("\nEnter a 5 Integer value : ");
            for (int i = 0; i < 5; i++)
            {
                scanf("\n%d", &i1[i]);
            }
            for (int i = 4; i >= 0; i--)
            {
                printf("\n%d", i1[i]);
            }
            break;

        case 3:
            printf("\nEnter a 5 Float value : ");
            for (int i = 0; i < 5; i++)
            {
                scanf("\n%c", &ch1[i]);
            }
            for (int i = 4; i >= 0; i--)
            {
                printf("\n%c", ch1[i]);
            }
            break;
        }
        break;
    }
}