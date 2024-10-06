// Write a program to count spaces in a given string.

#include <stdio.h>
#include <string.h>
int count_spaces(char a[]);
int main()
{
    char ch, str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("Total Spaces in %s: %d", str, count_spaces(str));

    return 0;
}
int count_spaces(char str[])
{
    int i, count = 0;
    for (i = 0; str[i]; i++)
        if (str[i] == ' ')
            count++;
    return count;
}