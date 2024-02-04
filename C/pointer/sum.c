// Ask two integers from user, and store them in variables A & B (using their pointers). Add both the variables and store it in a varible C (using their pointers) and also print the answer C (using its pointer).

// #include<stdio.h>
// void main()
// {
//     int A, B,C;
//     int *pa = &A, *pb = &B , *pc=&C;
//     printf("Enter value of a: ");
//     scanf("%d", pa);
//     printf("Enter value of b: ");
//     scanf("%d", pb);
//     *pc = *pa + *pb;
//     printf("\nVALUE OF A: %d", *pa);
//     printf("\nVALUE OF B: %d",*pb);
//     printf("\nAddition of a and b is %d", *pc);
// }

// Create an integer array a[5], ask 5 integers from user and store them in that array using pointer. Print the array using icrementing pointer.

// Write a C program that takes user defined integers from user, store them in an array using pointer &then reverse the array using pointers.
#include<stdio.h>
void main()
{
    int arr[100],temp = 0,n,i,j;
    printf("Enter a number of size: ");
    scanf("%d", &n);
    int *pl = &arr[n - 1], *pf = &arr[0];
    for (i = 0; i < n; i++)
    {
        printf("Enter a number: ");
        scanf("%d",pf);
        pf++;
    }
    printf("\n");
    pf = &arr[0];
    for (i = 0; i < n; i++)
    {
        printf("Enter a number: %d\n",arr[i]);
    }
    
    
    for (i = 0; i < n/2; i++)
    {
        temp = *pf;
        *pf = *pl;
        *pl = temp;
        pf++;
        pl--;
    }
    
    printf("Reversed Array\n");
    for (int i = 0; i < n; i++)
    {
        printf("Entered number is: %d\n",arr[i]);
    }
}

