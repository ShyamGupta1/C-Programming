// Write a program to find second Largest in an array.Take array values from the user

#include <stdio.h>

int main()
{
    int arr[10], max, sec_max, i;
    printf("Enter 10 Number: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    sec_max = arr[1];
    if (arr[0] < arr[1])
    {
        max = arr[1];
        sec_max = arr[0];
    }
    else
    {
        max = arr[0];
        sec_max = arr[1];
    }
    for (i = 2; i < 10; i++)
    {
        if (arr[i] > max)
        {
            sec_max = max;
            max = arr[i];
        }
        else if (arr[i] != max && arr[i] > sec_max)
        {
            sec_max = arr[i];
        }
    }
    printf("Largest: %d\nSecond Largest: %d", max, sec_max);
    return 0;
}