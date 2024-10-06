// Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h>
void string_copy(char a[], char b[]);
int main()
{
    char str1[50], str2[] = "Hello";
    string_copy(str1, str2);
    printf("Copied String: %s", str1);
    return 0;
}
void string_copy(char a[], char b[])
{
    for (int i = 0; i <= strlen(b) + 1; i++)
        a[i] = b[i];
}