// Ask 10 integers from user and store all the even numbers from the input to a file named 'even.txt'

#include <stdio.h>
int main()
{
    FILE *hell;
    int i,a[10];
    for (i = 0; i < 10;i++)
    {
        scanf("%d", &a[i]);
    }

    hell = fopen("even.txt", "w");
    fprintf(hell, "Even numbers: ");
    for (i = 0; i < 10; i++)
    {
        if(a[i]%2==0)
        {
            fprintf(hell, "\n %d", a[i]);
        }
    }
    fclose(hell);
}
