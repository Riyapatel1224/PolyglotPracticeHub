// 2. Write a program to store the roll no.(starting from 1), name and age of 5 students and then print the details of the student with roll no.given by user.

// #include <stdio.h>
// struct structStudent
// {
//     int age, marks,rolln;
//     char name[30];
// };
// int main()
// {
//     struct structStudent e[1];
//     int j;
//     for (int i = 1; i <= 5; i++)
//     {
//         printf("\nEnter the name of %d student: ", i);
//         scanf("%s", &e[i].name);
//         printf("\nEnter the age of %d student: ", i);
//         scanf("%d", &e[i].age);
//         printf("\nEnter the marks of %d student: ", i);
//         scanf("%d", &e[i].marks);
//     }
//     printf("Enter the roll no of the student you want to display: ");
//     scanf("%d", &j);

//     printf("\nAGE\t\tNAME\t\tMARKS");
//     printf("\n%d\t\t%s\t\t%d", e[j].age, e[j].name, e[j].marks);
// }

// 3. Write a program to add two distances in inch - feet using structure.The values of the distances is to be taken from the user.

/*
#include<stdio.h>
struct DF
{
    float d1,d2,add;
};

int main()
{
    struct DF d[1];
    for (int i = 0; i < 1;i++)
    {
        printf("Enter the 1 inch or feet you want to add: ");
        scanf("%f", &d[i].d1);
        printf("Enter the 2 inch or feet you want to add: ");
        scanf("%f", &d[i].d2);
    }

    printf("\n%f %f", d[0].d1, d[0].d2);
    printf("\nThe addition of two distances are : %.2f", d[0].d1 + d[0].d2);
}
*/

// 4. Enter the marks of 5 students in Chemistry, Mathematics and Physics(each out of 100) using a structure named Marks having elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student in a tabular form.eg : RollNo Chem Maths Phy Percentage 1 75 85 50 70
/*
#include<stdio.h>
struct marks
{
    int rolln, chem, phy, math,per;
    char name[30];
};

int main()
{
    struct marks s[5];
    int i, j;
    for (i = 0; i < 5;i++)
    {
        printf("\nEnter your name: ");
        scanf("%s", &s[i].name);
        printf("\nEnter your roll number: ");
        scanf("%d", &s[i].rolln);
        printf("\nEnter the marks of given subjects out of 100");
        printf("\nCHEMESTRY: ");
        scanf("%d", &s[i].chem);
        printf("\nMATHS: ");
        scanf("%d", &s[i].math);
        printf("\nPHYSICS: ");
        scanf("%d", &s[i].phy);
        s[i].per = ((s[i].math + s[i].phy + s[i].chem) * 100) / 300;
    }
    printf("\n\t\tNAME\t\tROLLNO\t\tCHEM\t\tMATHS\t\tPHY\t\tPERCENTAGE");

    for (j = 0; j < 5;j++)
    {
        printf("\n\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d", s[j].name, s[j].rolln, s[j].chem, s[j].math, s[j].phy, s[j].per);
    }
}
*/

// 5. Write a structure to store the roll no., age(between 11 to 14) and marks of students.Store the information in structure.1 - Print the roll numbers of all the students having age 14. 2 - Also print the marks of all the students having even roll no.

// #include<stdio.h>
// struct rollno
// {
//     int roll, age, marks;
// };
// int main()
// {
//     int i;
//     struct rollno s[8];
//     printf("\nENTER THE AGE BETWEEN 11 TO 14");
//     for (i = 0; i < 8; i++)
//     {
//         printf("\nEnter the roll no of %d student: ", i + 1);
//         scanf("%d", &s[i].roll);
//         printf("Enter the marks no of %d student: ", i + 1);
//         scanf("%d", &s[i].marks);
//         printf("Enter the age no of %d student: ", i + 1);
//         scanf("%d", &s[i].age);
//     }
//     printf("\nstudent that have age 14");

//     for (i = 0; i < 8;i++)
//     {
//         if(s[i].age==14)
//         {
//             printf("\n%d",s[i].roll);
//         }

//     }
//     printf("\nstudent that have even roll no.");
//     for (i = 0; i < 8; i++)
//     {
//         if (s[i].age % 2 == 0)
//         {
//             printf("\n%d", s[i].roll);
//         }
//     }
// }

// 6. Write a structure to store the name, account number and balance of customers(more than 10) and store their information.1 - Print the account number of all the customers having balance less than $200.2 - Add interest amount of $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.

// #include <stdio.h>
// struct account
// {
//     int accnum, balance;
//     char name[30];
// } e[3];
// int main()
// {
//     int i;
//     for (i = 1; i <= 3; i++)
//     {
//         printf("ENTER THE NAME:");
//         scanf("%s", &e[i].name);
//         printf("ENTER THE ACCOUNT NUM:");
//         scanf("%d", &e[i].accnum);
//         printf("ENTER THE BALANCE:");
//         scanf("%d", &e[i].balance);
//     }
//     for (i = 1; i <= 3; i++)
//     {
//         if (e[i].balance < 200)
//         {
//             printf("\n%d", e[i].accnum);
//         }
//     }
//     printf("\nUPDATED BALANCE");
//     for (i = 1; i <= 3; i++)
//     {
//         if (e[i].balance > 1000)
//         {
//             e[i].balance += 100;
//             printf("\n%s = %d", e[i].name, e[i].balance);
//         }
//     }
// }

// 7. Write a program to compare two dates entered by user.Make a structure named Date to store the elements day, month and year(all integers) to store the dates.If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".

// 8. Write a program to add, subtract, multiply and divide two complex numbers using structures to functions according to choice of the user.Test Cases :
//(6 + 4i) + (8 - 2i) = 14 + 2i
// (10 + 3i) - (7 - 4i) = 3 + 7i
// (2 + 3i) * (1 + 5i) = -13 + 13i
//(3 + 4i) / (8 - 2i) = 0.235 + 0.559i

#include <stdio.h>
struct complex
{
    float img, real;
};

struct complex add(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

struct complex sub(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real - b.real;
    c.img = a.img - b.img;
    return c;
}

struct complex div(struct complex a, struct complex b)
{
    struct complex c;
    c.real = ((a.real * b.real) + (a.img * b.img)) / ((b.real * b.real) + (b.img * b.img));
    c.img = ((a.img * b.real) - (a.real * b.img)) / ((b.real * b.real) + (b.img * b.img));
    return c;
}

struct complex mul(struct complex a, struct complex b)
{
    struct complex c;
    // prod.real = (x.real * y.real) - (x.img * y.img);
    // prod.img = (x.real * y.img) + (x.img * y.real);
    c.real = (a.real * b.real) - (a.img * b.img);
    c.img = (a.real * b.img) + (a.img * b.real);
    return c;
}

int main()
{
    struct complex s[3];
    int choice;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the real part of %d : ", i + 1);
        scanf("%f", &s[i].real);
        printf("Enter the imaginary part of %d : ", i + 1);
        scanf("%f", &s[i].img);
    }
    printf("\n1.....ADDITION\n2.....SUBTRACTION\n3.....DIVISION\n4.....MULTIPLICATION");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        s[2] = add(s[0], s[1]);
        printf("(%.2f + %.2fi) + (%.2f + %.2fi) = (%.2f + %.2fi)", s[0].real, s[0].img, s[1].real, s[1].img, s[2].real, s[2].img);
        break;

    case 2:
        s[2] = sub(s[0], s[1]);
        printf("(%.2f + %.2fi) - (%.2f + %.2fi) = (%.2f + %.2fi)", s[0].real, s[0].img, s[1].real, s[1].img, s[2].real, s[2].img);
        break;

    case 3:
        s[2] = div(s[0], s[1]);
        printf("(%.2f + %.2fi) / (%.2f + %.2fi) = (%.2f + %.2fi)", s[0].real, s[0].img, s[1].real, s[1].img, s[2].real, s[2].img);
        break;

    case 4:
        s[2] = mul(s[0], s[1]);
        printf("(%.2f + %.2fi) * (%.2f + %.2fi) = (%.2f + %.2fi)", s[0].real, s[0].img, s[1].real, s[1].img, s[2].real, s[2].img);
        break;

    default:
        printf("\nEnter valid input \nTRY AGAIN");
        break;
    }
}
