// Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10], sum = 0;
    float avg;
    printf("Enter 10 Numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (int i = 1; i < 10; i++)
        sum = sum + arr[i];
    avg = sum / 10.0;
    printf("Average is:%f", avg);
    return 0;
}