// Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>

void sort_string(char a[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    sort_string(str);
    printf("Sorted String: %s", str);
    return 0;
}
void sort_string(char a[])
{
    int round, i;
    for (round = 1; round < strlen(a); round++)
        for (i = 0; i < strlen(a) - round; i++)
            if (a[i] > a[i + 1])
                a[i] = a[i] + a[i + 1] - (a[i + 1] = a[i]);
}