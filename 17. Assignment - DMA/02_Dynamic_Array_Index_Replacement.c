/* Write a C program that prompts the user for the size of an array and its elements.
The program should create a new array where each element is replaced by the index of its corresponding value from the original array.
For example, if the input is {3, 2, 0, 1}, the output should be {2, 3, 1, 0}. Ensure proper memory management to avoid leaks.

Example Output:
Enter Size: 4
Enter 4 elements: 3 2 0 1
Output: 2 3 1 0
Given the input:
Enter Size: 6
Enter 6 elements: 1 5 3 2 0 4
 */

#include <stdio.h>
#include <stdlib.h>
struct input
{
    int *data;
    int size;
};

struct input interchange(struct input arr)
{
    struct input answer;
    answer.size = arr.size;
    answer.data = (int *)malloc(sizeof(int) * answer.size);
    int i, j;
    for (i = 0; i < arr.size; i++)
        for (j = 0; j < arr.size; j++)
            if (i == arr.data[j])
                answer.data[i] = j;
    return answer;
}

int main()
{
    struct input arr;
    int i;
    printf("Enter Size: ");
    scanf("%d", &arr.size);
    printf("Enter %d elements: ", arr.size);
    arr.data = (int *)malloc(sizeof(int) * arr.size);
    for (i = 0; i < arr.size; i++)
    {
        scanf("%d", &arr.data[i]);
    }
    struct input result = interchange(arr);

    for (i = 0; i < result.size; i++)
    {
        printf("%d ", result.data[i]);
    }
    free(arr.data);
    free(result.data);
}