// Write a program to reverse a string.

#include <stdio.h>
#include <string.h>
void reverse_string(char a[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // Replace newline with null char
    reverse_string(str);
    return 0;
}
void reverse_string(char a[])
{
    int start, end;
    start = 0;
    end = strlen(a) - 1;
    while (start < end)
    {
        a[start] = a[start] + a[end] - (a[end] = a[start]);
        start++;
        end--;
    }
    printf("Reverse String: %s", a);
}

/*
void reverse_string(char a[])
{
    int i, l;
    l = strlen(a) - 1;
    for (i = 0; i < strlen(a) / 2; i++)
        a[i] = a[i] + a[l - i] - (a[l - i] = a[i]);
    printf("Reverse String: %s", a);
}
*/