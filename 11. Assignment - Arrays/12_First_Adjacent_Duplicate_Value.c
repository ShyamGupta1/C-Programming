/*
Write a function to find the first occurrence of adjacent duplicate values in the array.
Function has to return the value of the element.
*/

#include <stdio.h>

int adjacent_duplicate(int b[], int size)
{
    for (int i = 0; i <= size - 2; i++)
    {
        if (b[i] == b[i + 1])
            return b[i];
    }
    return 0;
}
int main()
{
    int size, i, duplicate;
    while (1)
    {
        printf("Enter size of array: ");
        scanf("%d", &size);
        if (size > 0)
            break;
        else
            printf("Enter valid size\n");
    }
    int arr[size];
    printf("Enter %d Elements in your array: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    duplicate = adjacent_duplicate(arr, size);
    printf(duplicate == 0 ? "No adjacent Duplicate Found" : "The first Adjacent Duplicate value is: %d", duplicate);
    printf(("hello %d", 5));

    return 0;
}