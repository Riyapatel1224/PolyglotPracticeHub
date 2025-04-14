#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p;
    int *a;

    p = malloc(sizeof(int));
    a = calloc(5, sizeof(int));

    printf("\nenter number: ");
    scanf("%d", &p);

    printf("\np : %d", p);
    // free(p);

    printf("\nEnter 5 number: ");

    for (int i = 0; i < 5;i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", a[i]);
    }

        return 0;
}