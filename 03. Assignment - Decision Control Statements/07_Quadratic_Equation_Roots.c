#include <stdio.h>

int main()
{
    float a, b, c, discriminant;
    printf("Enter Cofficients a,b and c: ");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
        printf("Roots are real & distinct");
    else if (discriminant == 0)
        printf("Roots are real & Equal");
    else
        printf("Roots are Imaginary");
    return 0;
}