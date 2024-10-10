// Write a program to read 10 number of values in an array and display it in reverseorder. Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10], i;
    printf("Enter 10 Numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    // Display in reverse order
    for (i = 9; i >= 0; i--)
        printf("%d ", arr[i]);
    return 0;
}