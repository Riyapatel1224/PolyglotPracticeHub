#include<stdio.h>
#include<stdlib.h>
struct Student
{
    char name[30];
    int eng, math, sci;
    float marks;
};

void getData(int *p){

    printf("\nEnter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\n");
    
}

void printData(int *p)
{
    printf("Printing: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", p[i]);
    }
    printf("\n");
}

void oddSum(int *p)
{
    int sum=0;
    for (int i = 0; i < 5;i++){
        if(p[i]%2==1){
            sum += p[i];
        }
        else{
            continue;
        }
    }
    printf("\nThe sum of all odd number is : %d", sum);
}

int main(){
    // int *p;
    // int *a;

    // p = malloc(sizeof(int));
    // a = calloc(5, sizeof(int));

    // printf("\nenter number: ");
    // scanf("%d", &p);

    // printf("\np : %d", p);
    // // free(p);

    // printf("\nEnter 5 number: ");

    // for (int i = 0; i < 5;i++){
    //     scanf("%d", &a[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\n%d", a[i]);
    // }


    //--------------------------------
    // int *p;
    // p = calloc(5, sizeof(int));
    // getData(p);
    // printData(p);
    // oddSum(p);

    //--------------------------------

    struct Student *s;
    s = malloc(sizeof(struct student*));

    printf("\nEnter name , marks -> english,maths,sci and marks of the student");
    scanf("%s%d%d%d%f", &s->name, &s->eng,&s->math,&s->sci,&s->marks);

    printf("\nname %s, marks -> english %d ,maths %d ,sci %d and marks %f of the student", s->name, s->eng, s->math, s->sci, s->marks);

    return 0;
}