/*
Write a function to extract a substring from a given string with specified start index
(inclusive) and end index (exclusive), and store the extracted string in another char
array. [ void extract_string(char *str, int start_index, int end_index, char *result);
*/
#include <stdio.h>
#include <string.h>

void extract(char *a, int start, int end, char *extract)
{
    int i;
    for (i = start; i <= end; i++)
        *(extract + i - start) = *(a + i);
    *(extract + i - start) = '\0';
    printf("%s", extract);
}
int main()
{
    char str[20], result[20];
    int start_index, end_index;
    printf("Enter a String: ");
    fgets(str, sizeof str, stdin);
    str[strlen(str) - 1] = '\0';
    while (1)
    {
        printf("Enter Start Index: ");
        scanf("%d", &start_index);
        printf("Enter End Index: ");
        scanf("%d", &end_index);
        if (start_index >= 0 && end_index <= (strlen(str) - 1) && start_index <= end_index)
            break;
        else
            printf("Enter Valid Start and End Index\n");
    }
    extract(str, start_index, end_index, result);
    return 0;
}