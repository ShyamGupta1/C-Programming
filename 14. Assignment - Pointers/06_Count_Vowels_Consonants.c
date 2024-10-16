// Write a program to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, count_V = 0, count_C = 0;
    char vowels[11] = "aeiouAEIOU";
    char str[20];
    printf("Enter a String: ");
    fgets(str, sizeof str, stdin);
    str[strlen(str) - 1] = '\0';
    char *ptr;
    for (i = 0; *(vowels + i); i++)
        for (j = 0; *(str + j); j++)
            if (*(vowels + i) == *(str + j))
                count_V++;
    count_C = strlen(str) - count_V;
    printf("Vowels: %d\nConsonants: %d", count_V, count_C);
    return 0;
}

/* int main()
{
    int i, j = 0, count_V = 0, count_C = 0;
    char vowels[11] = "aeiouAEIOU";
    char str[20];
    printf("Enter a String: ");
    fgets(str, sizeof str, stdin);
    str[strlen(str) - 1] = '\0';
    char *ptr = str;
    while (*ptr)
    {
        for (i = 0; vowels[i]; i++)
            if (vowels[i] == *ptr)
            {
                j = 1;
                count_V++;
            }
        if (!j)
            count_C++;
        ptr++;
    }
    printf("Vowels: %d\nConsonants: %d", count_V, count_C);
    return 0;
}
 */