// HW : Write a C program that reverses the given integer using pointer concept.For example, if the number input by user is 5392 then your program will print the output 2935.



// Write a program with functions scanArray.printArray &reverseArray which take array input, print array on the output and reverse the array whose pointer is provided in the argument along with its number of rows &number of columns.Ask an array of user - defined size from the user, print it, reverse it and also print the reversed array.Note : you should scan tha array from user using scanArray() function, print the array using printArray() function and reverse the array using reverseArray() function only.

#include<stdio.h>
    void
    scanArr(int *pa, int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c;j++)
        {
            scanf("%d", pa);
            pa++;
        }
    }
}
void printArr(int *pa, int r, int c)
{
    int i, j;
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", *pa);
            pa++;
        }
        printf("\n");
    }
}

void reverseArr(int *pa , int r, int c)
{
    int i, j;
    int *rev = pa + (r * c) - 1;
    printf("\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j <c; j++)
        {
            printf("%d ", *rev);
            rev--;
        }
        printf("\n");
    }
}

int main()
{
    int i, j,r,c;
    printf("Enter the value of r: ");
    scanf("%d", &r);
    printf("Enter the value of c: ");
    scanf("%d", &c);
    int a[r][c], b[r][c];
    int *pa = &a[0][0],*pb=&b[0][0];
    printf("Enter First Array: \n");
    scanArr(pa,r,c);
    printf("Enter Second Array: \n");
    scanArr(pb,r,c);
    printf("first Array: \n");
    printArr(pa,r,c);
    printf("Second Array array: \n");
    printArr(pb,r,c);
    printf("\nREVERSED ARRAY IS: ");
    reverseArr(pa, r, c);
    reverseArr(pb, r, c);
    return 0;
}

// #include<stdio.h>
// void scanArr(int *pa,int r,int c)
// {
//     int i, j;
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c;j++)
//         {
//             scanf("%d", pa);
//             pa++;
//         }
//     }
// }
// void printArr(int *pa, int r, int c)
// {
//     int i, j;
//     printf("\n");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             printf("%d ", *pa);
//             pa++;
//         }
//         printf("\n");
//     }
// }

// int main()
// {
//     int i, j,r,c;
//     printf("Enter the value of r: ");
//     scanf("%d", &r);
//     printf("Enter the value of r: ");
//     scanf("%d", &c);
//     int a[r][c], b[r][c];
//     int *pa = &a[0][0],*pb=&b[0][0];
//     printf("Enter First Array: \n");
//     scanArr(pa,r,c);
//     printf("Enter Second Array: \n");
//     scanArr(pb,r,c);
//     printf("first Array: \n");
//     printArr(pa,r,c);
//     printf("Second Array array: \n");
//     printArr(pb,r,c);
//     return 0;
// }


    // #include <stdio.h>
    // void m(int a[3][3])
    // {
    //     int i, j;
    //     for (i = 0; i < 3; i++)
    //     {
    //         for (j = 0; j < 3; j++)
    //         {
    //             printf("Enter element of a: ");
    //             scanf("%d", &a[i][j]);
    //         }
    //     }
    // }
    // int main()
    // {
    //     int a[3][3], b[3][3], c[3][3];
    //     m(a);
    //     printf("\nUser entered array is \n");
    //     int i, j;
    //     for (i = 0; i < 3; i++)
    //     {
    //         for (j = 0; j < 3; j++)
    //         {
    //             printf("%d ", b[i][j]);
    //         }
    //         printf("\n");
    //     }
    //     return 0;
    // }
