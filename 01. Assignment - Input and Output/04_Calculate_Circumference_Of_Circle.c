#include <stdio.h>

int main()
{
    int radius;
    float circ;
    printf("Enter the radius of a Circle: ");
    scanf("%d", &radius);
    circ = 2 * 3.14 * radius;
    printf("Circumference of circle with radius %d is %.2f", radius, circ);
    printf("\n");
    return 0;
}
