/*
Write a function to rotate an array by n position in d direction. The d is an indicativevalue for left or right.
(For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 andd is left, then the resulting array after left
rotation 2 times is [40, 12, 70, 32, 29] )
*/

#include <stdio.h>

void rotate(int b[], int n, int pos, int dir)
{
    int i, temp;
    while (pos)
    {
        if (dir == 1)
        {
            temp = b[n - 1];
            for (i = n - 2; i >= 0; i--)
                b[i + 1] = b[i];
            b[0] = temp;
        }
        else
        {
            temp = b[0];
            for (i = 0; i <= n - 2; i++)
                b[i] = b[i + 1];
            b[n - 1] = temp;
        }
        pos--;
    }
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
}

void rotate_array(int b[], int n, int pos, int dir)
{
    int round, i;

    for (round = 1; round <= pos; round++)
    {
        // Left Rotation
        if (dir == 0)
        {
            for (i = 0; i < n - 1; i++)
                b[i] = b[i] + b[i + 1] - (b[i + 1] = b[i]);
        }
        // Right Rotation
        else
            for (i = n - 1; i >= 1; i--)
                b[i - 1] = b[i - 1] + b[i] - (b[i] = b[i - 1]);
    }
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);
}

int main()
{
    int size, i, pos, dir;
    while (1)
    {
        printf("Enter the size of array: ");
        scanf("%d", &size);
        if (size <= 0)
            printf("Enter valid size");
        else
            break;
    }
    int arr[size];
    printf("Enter %d Numbes in array: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    while (1)
    {

        printf("In which direction you want to rotate\n0 - Left\n1 - Right: ");
        scanf("%d", &dir);
        printf("By how many position you want to rotate the array: ");
        scanf("%d", &pos);
        if ((dir == 0 || dir == 1) && pos > 0)
            break;
        else
            printf("\nEnter valid direction and position no.\n");
    }
    rotate(arr, size, pos, dir);
    return 0;
}