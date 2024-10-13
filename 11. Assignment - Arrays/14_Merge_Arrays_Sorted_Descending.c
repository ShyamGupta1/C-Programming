// Write a function in C to merge two arrays of the same size sorted in descending order.

#include <stdio.h>

void merge_and_sort(int a[], int b[], int n)
{
    int i, round, merged_array[2 * n];
    for (i = 0; i < n; i++)
        merged_array[i] = a[i];
    for (i = n; i < 2 * n; i++)
        merged_array[i] = b[i - n];
    for (round = 1; round < 2 * n; round++)
        for (i = 0; i < 2 * n - round; i++)
        {
            if (merged_array[i] < merged_array[i + 1])
                merged_array[i] = merged_array[i] + merged_array[i + 1] - (merged_array[i + 1] = merged_array[i]);
        }
    for (i = 0; i < 2 * n; i++)
        printf("%d ", merged_array[i]);
}
int main()
{

    int size, i;
    while (1)
    {
        printf("Enter the size of the array: ");
        scanf("%d", &size);
        if (size > 0)
            break;
        else
            printf("Enter Valid Size\n");
    }
    int arr1[size], arr2[size];
    printf("Enter %d Numbers in 1st Array: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr1[i]);
    printf("Enter %d Numbers in 2nd Array: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr2[i]);
    merge_and_sort(arr1, arr2, size);
    return 0;
}