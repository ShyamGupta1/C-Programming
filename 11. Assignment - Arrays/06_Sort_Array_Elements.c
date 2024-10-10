// Write a program to sort elements of an array of size 10. Take array values from theuser.

// Bubble Sort

#include <stdio.h>
int main()
{
    int arr[10], i, round, temp;
    printf("Enter 10 Numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    // Sorting
    for (round = 1; round <= 9; round++)
    {
        for (i = 0; i < 10 - round; i++)
            if (arr[i] > arr[i + 1])
            {
                // Swapping
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
    }
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}