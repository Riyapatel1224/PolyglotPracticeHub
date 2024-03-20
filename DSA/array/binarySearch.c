#include <stdio.h>
#define SIZE 10
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void binarySearch(int search)
{
    int min, max, mid;
    int success = 0;
    min = 0;
    max = SIZE - 1;
    while (min <= max)
    {
        mid = (min + max) / 2;
        if (search == a[min])
        {
            success = 1;
            break;
        }
        else if (search > a[mid])
        {
            min = mid + 1;
        }
        else
        {
            max = min - 1;
        }
    }

    success == 1 ? printf("\n%d found", search) : printf("\n%d not found", search);
}

int main()
{
    binarySearch(10);
    binarySearch(-10);
}