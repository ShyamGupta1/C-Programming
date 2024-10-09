// Write a program to find the smallest number stored in an array of size 10. Take arrayvalues from the user.

#include <stdio.h>

int main()
{
    int arr[10], minNum;
    printf("Enter 10 Numbers in array: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    minNum = arr[0];
    for (int i = 1; i < 10; i++)
        if (arr[i] < minNum)
            minNum = arr[i];
    printf("Smallest Number is: %d", minNum);
    return 0;
}