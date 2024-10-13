// Write a function in C to read n number of values in an array and display it in reverseorder.

#include <stdio.h>

void display_reverse(int b[], int size)
{
    for (int i = size - 1; i >= 0; i--)
        printf("%d ", b[i]);
}
int main()
{
    int size, i;
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
    display_reverse(arr, size);

    return 0;
}