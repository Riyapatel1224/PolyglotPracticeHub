#include <stdio.h>

// Function to calculate Fibonacci sequence using recursion
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;

    // Input the number of terms
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    // Displaying Fibonacci sequence up to the nth term
    printf("Fibonacci Sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
