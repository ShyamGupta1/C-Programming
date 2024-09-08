#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter Marks of 5 Subjects: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if (a >= 33 && b >= 33 && b >= 33 && b >= 33 && b >= 33)
        printf("Result: PASS");
    else
        printf("Result: FAIL");
    return 0;
}
