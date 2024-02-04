/*
    Author : Riya Patel
    DOC : 24 Aug,2023
    Objective : Write a program in C to store n elements in an array and print the elements using a pointer.
Test Data :
Input the number of elements to store in the array :5
Input 5 number of elements in the array :
element - 0 : 5
element - 1 : 7
element - 2 : 2
element - 3 : 9
element - 4 : 8
Expected Output :

 The elements you entered are :
 element - 0 : 5
 element - 1 : 7
 element - 2 : 2
 element - 3 : 9
 element - 4 : 8
*/

#include<stdio.h>
int main()
{
    int a,*p;
    printf("\nEnter the element you want to enter: ");
    scanf("%d", &a);
    int ar[a];
    
    for (int i = 0; i < a;i++)
    {
        scanf("%d", &ar[i]);
    }
       
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", *p);
    }
}
