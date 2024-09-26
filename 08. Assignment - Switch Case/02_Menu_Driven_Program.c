#include <stdio.h>
#include <stdlib.h>

int main()
{

    while (1)
    {
        int n, a, b;
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\nEnter your choice: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Result: %d\n", a + b);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Result: %d\n", a - b);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Result: %d\n", a * b);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            if (b)
                printf("Result: %d\n", a / b);
            else
                printf("Division by zero is not allowed");
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Input");
        }
    }

    return 0;
}