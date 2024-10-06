// Write a program to convert a given string into lowercase.

#include <stdio.h>
#include <string.h>
void str_lower(char str[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    str_lower(str);
    return 0;
}
void str_lower(char a[])
{
    int i;
    for (i = 0; a[i]; i++)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + 32;
    printf("Lowercase String: %s", a);
}