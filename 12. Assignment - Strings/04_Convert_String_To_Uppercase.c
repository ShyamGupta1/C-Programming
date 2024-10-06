// Write a program to convert a given string into uppercase.

#include <stdio.h>
#include <string.h>
void str_upper(char str[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    str_upper(str);
    return 0;
}
void str_upper(char a[])
{
    int i;
    for (i = 0; a[i]; i++)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 32;
    printf("Uppercase String: %s", a);
}