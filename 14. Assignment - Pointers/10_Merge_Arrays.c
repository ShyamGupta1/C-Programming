/* Write a function to merge two Sorted arrays in a given array. [ void merge(int *arr1, int
size1, int *arr2, int size2, int *arr3); ] */

#include <stdio.h>

void merge(int *, int, int *, int, int *);
int main()
{
    int arr1[] = {10, 34, 65, 78, 89};
    int arr2[] = {12, 34, 56, 71, 83, 94};
    int arr3[11];
    merge(arr1, 5, arr2, 6, arr3);
    for (int i = 0; i < 11; i++)
        printf("%d ", arr3[i]);
    return 0;
}

void merge(int *arr1, int size1, int *arr2, int size2, int *arr3)
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (*(arr1 + i) < *(arr2 + j))
        {
            *(arr3 + k) = *(arr1 + i);
            i++;
        }
        else
        {
            *(arr3 + k) = *(arr2 + j);
            j++;
        }
        k++;
    }
    if (i != size1)
    {
        *(arr3 + k) = *(arr1 + i);
        i++;
        k++;
    }
    if (j != size2)
    {
        *(arr3 + k) = *(arr2 + j);
        j++;
        k++;
    }
}