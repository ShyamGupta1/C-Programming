// Write a program to calculate the sum of all even numbers and sum of all oddnumbers, which are stored in an array of size 10. Take array values from the user.

#include <stdio.h>

int main()
{
    int arr[10], sumEven = 0, sumOdd = 0;
    printf("Enter 10 Numbers: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2)
            sumOdd = sumOdd + arr[i];
        else
            sumEven = sumEven + arr[i];
    }

    printf("Sum of all Even Numbers is: %d\n", sumEven);
    printf("Sum of all Odd Numbers is: %d", sumOdd);
    return 0;
}