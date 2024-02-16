#include <stdio.h>
#define n 5
int main()
{
    int ar[n], i, temp, shift, j,s;
    printf("Enter the elements of array \n");
    for (i = 0; i < 5; i++)
        scanf("%d", &ar[i]);

    printf("\nElements in original order are :\n");
    for (i = 0; i < n; i++)
        printf(" %d ", ar[i]);

    printf("\nEnter how many times you want to shift array :\n");
    scanf("%d", &shift);

    while (shift)
    {
        if(shift==5)
        {
            break;
        }
            temp = ar[0];
            for (i = 0; i < n; i++)
            {
                ar[i] = ar[i + 1];
            }
            ar[n - 1] = temp;
            shift--;
    }

    printf("\nElements after shifting %d positions to right :\n", shift);
    for (i = 0; i < n; i++)
        printf(" %d ", ar[i]);

    return 0;
}

// 1 2 3 4 5
// 5 1 2 3 4

// temp = ar[0];
// for (i = 0; i < n; i++)
// {
//     ar[i] = ar[i + 1];
// }
// ar[n - 1] = temp;
// shift--;

// temp = ar[n - 1];
// for (i = n - 1; i > 0; i--)
// {
//     ar[i] = ar[i - 1];
// }
// ar[0] = temp;
// shift--;

// #include <stdio.h>
// #define n 5
// int main()
// {
//     int ar[n], i, temp, shift, j, s;
//     printf("Enter the elements of array \n");
//     for (i = 0; i < 5; i++)
//         scanf("%d", &ar[i]);

//     printf("\nElements in original order are :\n");
//     for (i = 0; i < n; i++)
//         printf(" %d ", ar[i]);

//     printf("\nEnter how many times you want to shift array :\n");
//     scanf("%d", &shift);

//     while (shift)
//     {
//         if (shift == 5)
//         {
//             break;
//         }
//         if (shift > 5)
//         {
//             s = shift % (shift - 5);
//             temp = ar[0];
//             for (i = 0; i < n; i++)
//             {
//                 ar[i] = ar[i + 1];
//             }
//             ar[n - 1] = temp;
//             shift--;
//         }
//         else
//         {
//             temp = ar[0];
//             for (i = 0; i < n; i++)
//             {
//                 ar[i] = ar[i + 1];
//             }
//             ar[n - 1] = temp;
//             shift--;
//         }
//     }

//     printf("\nElements after shifting %d positions to right :\n", shift);
//     for (i = 0; i < n; i++)
//         printf(" %d ", ar[i]);

//     return 0;
// }