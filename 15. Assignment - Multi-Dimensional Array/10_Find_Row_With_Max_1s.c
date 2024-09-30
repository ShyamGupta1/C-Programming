// Write a program in C to find the row with maximum number of 1s.

#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5][5] = {
        {0, 1, 0, 1, 1},
        {1, 0, 0, 1, 0},
        {0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1}};
    int i, j, max = INT_MIN, index;
    for (i = 0; i < 5; i++)
    {
        int count = 0;
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
                count++;
        }
        if (count > max)
        {
            max = count;
            index = i;
        }
    }
    printf("The index of row with maximum 1s is:  %d", index);
    return 0;
}