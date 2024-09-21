/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/

// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a Number: ");
//     scanf("%d", &n);
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = (row - 1) * 5 + 1; col <= (row - 1) * 5 + 5; col++)
//             printf("%d ", col);

//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int count = 1;
    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= n; col++)
        {
            printf("%d ", count);
            count++;
        }

        printf("\n");
    }

    return 0;
}