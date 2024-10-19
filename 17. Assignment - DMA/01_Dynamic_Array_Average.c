/* Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values. */

#include <stdio.h>df
#include <stdlib.h>

int main()
{
    int i, size, *ptr, sum = 0;
    float avg;
    printf("How many numbers you want to enter: ");
    scanf("%d", &size);
    ptr = (int *)malloc(sizeof(int) * size);
    printf("Enter %d Numbers: ", size);
    for (i = 0; i < size; i++)
        scanf("%d", ptr + i);
    for (i = 0; i < size; i++)
        sum = sum + *(ptr + i);
    avg = (float)sum / size;
    printf("Average: %.2f", avg);
    return 0;
}