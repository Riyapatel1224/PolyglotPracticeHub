#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int rollnum;
    char name[30];
    int eng, math, sci;
    float TotalMarks;
    int MinMarks;
    int MaxMarks;
};



void getData(int *p)
{

    printf("\nEnter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\n");
}

void printData(int *p)
{
    struct Student *s;
    s = malloc(sizeof(struct student *));
    printf("Printing: \n");
    for (int i = 0; i < sizeof(p); i++)
    {
        printf("\nRoll number %d,name %s, marks -> english %d ,maths %d ,sci %d", s->rollnum, s->name, s->eng, s->math, s->sci);
    }
    printf("\n");
}

void minmaxMarks(int *p)
{
    int min,max;
    for (int i = 0; i < 3;i++){
        if(p[i] > p[i+1]){
            max = p[i];
        }
        else if (p[i]<p[i+1])
        {
            min = p[i];
        }
        else{
            continue;
        }
    }
    printf("Minimum marks of the student %d", min);
    printf("Maximum marks of the student %d", max);
}

void total(int *p){
    int total;
    struct Student *s;
    s = malloc(sizeof(struct student *));
    total = s->eng + s->math + s->sci;
    printf("\nTotal marks of the student is %d",(total / 3));
}

int main()
{
    struct Student *s;
    s = malloc(sizeof(struct student *));
    int flag = 1,choice;
    while (flag){
        printf("\nEnter what you want to do : \n1. addStudentData \n2. printData \n3. min and max marks of a student \n4. total marks of a student");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter roll number ,Enter name , marks -> english,maths,sci");
            scanf("%d%s%d%d%d", &s->rollnum, &s->name, &s->eng, &s->math, &s->sci);
            printf("\nRoll number %d,name %s, marks -> english %d ,maths %d ,sci %d", s->rollnum, s->name, s->eng, s->math, s->sci);
            break;
    
        case 2:
            printData(s);
            break;

        case 3:
            minmaxMarks(s);
            break;

        case 4:
            total(s);
            break;
        case 5:
            flag = 0;
            break;
        }
    }

    return 0;
}