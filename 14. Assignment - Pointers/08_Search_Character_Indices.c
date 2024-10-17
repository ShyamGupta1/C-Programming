/* Write a function to search all occurrences of a given character in a given string.
Result of search is a list of indices to be stored in the given array. [ void
search_all_occurrences(char *str, char Ch, int *arr); ] */

#include <stdio.h>
#include <string.h>

void search_all_occurrences(char *str, char Ch, int *arr)
{
    int i, j = 0;
    for (i = 0; i < 20; i++)
        *(arr + i) = -1;
    i = 0;
    while (*(str + i))
    {
        if (Ch == *(str + i))
        {
            *(arr + j) = i;
            j++;
        }
        i++;
    }
    for (i = 0; i < 20; i++)
        if (*(arr + i) != -1)
            printf("%d ", *(arr + i));
    if (!j)
        printf("Character not Found");
}

int main()
{
    int arr[20];
    char ch, str[20];
    printf("Enter a String: ");
    fgets(str, sizeof str, stdin);
    str[strlen(str) - 1] = '\0';
    fflush(stdin);
    printf("Enter a Character: ");
    scanf("%c", &ch);
    search_all_occurrences(str, ch, arr);

    return 0;
}