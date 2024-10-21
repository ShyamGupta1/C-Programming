/* Write a function to merge two array elements and store it in dynamically created
array. Return address of this dynamically created array. */

#include <stdio.h>
#include <stdlib.h>

int *merge(int *arr1, int size1, int *arr2, int size2)
{
    int i, j, k;
    int *ptr = (int *)malloc((size2 + size1) * sizeof(int));
    for (i = 0, j = 0, k = 0; i < size1 && j < size2; k++)
    {
        if (arr1[i] < arr2[j])
        {
            *(ptr + k) = arr1[i];
            i++;
        }
        else
        {
            *(ptr + k) = arr2[j];
            j++;
        }
    }
    while (i != size1)
    {

        ptr[k] = arr1[i];
        i++;
        k++;
    }
    while (j != size2)
    {
        ptr[k] = arr2[j];
        j++;
        k++;
    }
    return ptr;
}

int main()
{
    int arr1[] = {10, 34, 45, 51, 56, 78, 90};
    int arr2[] = {3, 12, 48, 50, 67, 53, 54, 55, 59};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    int *arr = merge(arr1, size1, arr2, size2);
    for (int i = 0; i < size1 + size2; i++)
        printf("%d ", arr[i]);

    free(arr);

    return 0;
}