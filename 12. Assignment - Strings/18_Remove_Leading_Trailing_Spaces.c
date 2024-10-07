// Write a function to trim a string (removing leading spaces from both the ends).

#include <stdio.h>
#include <string.h>
char *trim_string(char a[]);
int main()
{

    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("\nBefore\nSize: %d\nString: %s\n\n", strlen(str), str);
    printf("\nAfter\nSize: %d\nString: %s", strlen(str), trim_string(str));

    return 0;
}
char *trim_string(char a[])
{
    int j, i = 0;
    while (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
        i++;
    for (j = 0; a[j + i]; j++)
        a[j] = a[j + i];
    i = j - 1;
    while (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
        i--;
    a[i + 1] = '\0';
    return a;
}