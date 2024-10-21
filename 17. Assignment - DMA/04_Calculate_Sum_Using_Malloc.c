// Write a program to calculate the sum of n numbers entered by the user using malloc and free.

#include <stdio.h>
#include <stdlib.h>

int Sum(int *arr, int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
        sum = sum + *(arr + i);
    return sum;
}

int main()
{
    int i, size, *ptr;
    printf("Enter Size of the Array: ");
    scanf("%d", &size);
    ptr = (int *)malloc(sizeof(int) * size);
    printf("Enter %d Numbers: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", ptr + i);
    printf("Sum is: %d", Sum(ptr, size));
    free(ptr);
    return 0;
}