#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping:\na - %d\nb - %d", a, b);
    printf("\n");
    return 0;
}


// #include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     a = a * b;
//     b = a / b;
//     a = a / b;
//     printf("After Swapping:\na - %d\nb - %d", a, b);
//     printf("\n");
//     return 0;
// }