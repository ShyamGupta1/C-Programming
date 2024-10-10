// Write a program to find the second smallest number in an array.Take array valuesfrom the user.

#include <stdio.h>

int main()
{
    int arr[10], i, small, sec_small;
    printf("Enter 10 Numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    if (arr[0] < arr[1])
    {
        small = arr[0];
        sec_small = arr[1];
    }
    else
    {
        small = arr[1];
        sec_small = arr[0];
    }

    for (i = 2; i < 10; i++)
    {
        if (arr[i] < small)
        {
            sec_small = small;
            small = arr[i];
        }
        else if (arr[i] < sec_small && arr[i] != small)
        {
            sec_small = arr[i];
        }
    }
    printf("Smallest:%d\nSecond Smallest:%d", small, sec_small);

    return 0;
}

/*
#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[10], i, small, sec_small;
    printf("Enter 10 Numbers: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    small = arr[0];
    sec_small = INT_MIN;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] < small)
        {
            sec_small = small;
            small = arr[i];
        }
        else if (arr[i] != small && arr[i] < sec_small)
        {
            sec_small = arr[i];
        }
    }
    printf("%d", sec_small);

    return 0;
} */