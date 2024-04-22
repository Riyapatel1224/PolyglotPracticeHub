#include <stdio.h>

int main()
{
    float x, temp1;
    int y;
    printf("Enter value of X\n");
    scanf("%f", &x);
    y = (int)x;
    // printf("%d", y);
    // if (temp1 >= 0.5)
    // {
    //     x += 1;
    //     y = (int) x;
    //     printf("%d", y);
    // }
    // else if (temp1 < 0.5)
    // {
    //     y = (int) x;
    //     printf("%d", y);
    // }
    // else if (temp1 < 0)
    // {

    // }
    // temp1 = y - x;
    // printf("%f", temp1);
    if (x >= 0)
    {

        temp1 = x - y;
        // printf("%f\n", temp1);
        if (temp1 >= 0.5)
        {
            x += 1;
            y = (int) x;
            printf("%d\n", y);
        }
        else
        {
            y = (int) x;
            printf("%d\n", y);
        }
    }
    else
    {
        temp1 = y - x;
        // printf("%f\n", temp1);
        if (temp1 <= 0.5)
        {
            x -= 1;
            y = (int) x;
            printf("%d\n", y);
        }
        else
        {
            y = (int) x;
            printf("%d\n", y);
        }
    }
    return 0;
}