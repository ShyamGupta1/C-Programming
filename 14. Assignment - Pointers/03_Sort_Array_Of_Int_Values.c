// Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

#include <stdio.h>

void sort(int *, int size);
int main()
{
    int arr[] = {12, 34, 23, 54, 12, 45, 2};
    sort(arr, 7);
    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);
    return 0;
}
void sort(int *ptr, int size)
{
    int round, i;
    for (round = 1; round < size; round++)
        for (i = 0; i < size - round; i++)
            if (*(ptr + i) > *(ptr + i + 1))
                *(ptr + i) = *(ptr + i) + *(ptr + i + 1) - (*(ptr + i + 1) = *(ptr + i));
}