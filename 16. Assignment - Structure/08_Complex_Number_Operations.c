/* Create a structure named Complex to represent a complex number with real and imaginary parts.
Write a C program to add and multiply two complex numbers. */

#include <stdio.h>

struct Complex
{
    float real, imag;
};

void input(struct Complex *C)
{
    scanf("%f+%fi", &C->real, &C->imag);
}
struct Complex sum(struct Complex C1, struct Complex C2)

{
    struct Complex C;
    C.real = C1.real + C2.real;
    C.imag = C1.imag + C2.imag;
    return C;
}
struct Complex product(struct Complex C1, struct Complex C2)
{
    struct Complex C;
    C.real = C1.real * C2.real - C2.imag * C1.imag;
    C.imag = C1.real * C2.imag + C1.imag * C2.real;
    return C;
}

int main()
{
    struct Complex C1, C2, C3;
    printf("Input details for Complex Number 1 (real+imagi): ");
    input(&C1);
    printf("Input details for Complex Number 2 (real+imagi): ");
    input(&C2);
    printf("\n");
    C3 = sum(C1, C2);
    printf("Sum of Complex Numbers:\n%.2f + %.2fi\n\n", C3.real, C3.imag);
    C3 = product(C1, C2);
    printf("Product of Complex Numbers:\n%.2f + %.2fi", C3.real, C3.imag);

    return 0;
}