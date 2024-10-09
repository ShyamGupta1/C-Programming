// Write a program to find the greatest number stored in an array of size 10. Take arrayvalues from the user.

#include <stdio.h>

int main()
{
    int arr[10], maxNum;
    printf("Enter 10 Numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    maxNum = arr[0];
    for (int i = 1; i < 10; i++)
        if (maxNum < arr[i])
            maxNum = arr[i];
    printf("Largest Number is:%d", maxNum);
    return 0;
}