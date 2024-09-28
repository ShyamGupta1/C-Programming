#include <stdio.h>
float area(int);
int main()
{
    int radius;
    printf("Enter radius of a Circle: ");
    scanf("%d", &radius);
    printf("%f", area(radius));

    return 0;
}
float area(int r)
{
    return 3.14 * r * r;
}