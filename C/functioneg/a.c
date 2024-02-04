// Create structure to store a complex number. Ask 2 complex numbers from user and store them in that structure. Create one more variable in the same structure to store answer of their addition and print all of them in appropriate way.

#include <stdio.h>

// Structure to function
struct complex addComplex(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c;
}

struct complex
{
    float real;
    float img;
};

int main()
{
    struct complex c[3];
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter complex no-%d:\n", i);
        printf("real part: ");
        scanf("%f", &c[i].real);
        printf("imaginary part: ");
        scanf("%f", &c[i].img);
    }

    // Addition:
    /*
    c[2].real = c[0].real + c[1].real;
    c[2].img = c[0].img + c[1].img;
    */

    // Addition using function:
    c[2] = addComplex(c[0], c[1]);

    printf("(%.2f + %.2f i) + (%.2f + %.2f i) = (%.2f + %.2f i)", c[0].real, c[0].img, c[1].real, c[1].img, c[2].real, c[2].img);
    return 0;
}