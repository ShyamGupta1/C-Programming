// Write a function to find the repeated character in a given string.

#include <stdio.h>
#include <string.h>

char find_first_repeated_char(char *a);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    if (find_first_repeated_char(str))
        printf("The first repetitive character in \"%s\" is: %c ", str, find_first_repeated_char(str));
    else
        printf("There is no repetitive character in the string \"%s\"", str);
}

char find_first_repeated_char(char *a)
{
    int i, freq[256] = {};
    for (i = 0; a[i]; i++)
        freq[a[i]]++;
    for (i = 0; a[i]; i++)
        if (freq[a[i]] > 1)
            return a[i];
    return '\0';
}