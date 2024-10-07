// Write a function to remove all spaces from a string.

#include <stdio.h>
#include <string.h>
char *remove_spaces(char a[]);
int main()
{

    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("\nBefore\nSize: %d\nString: %s\n\n", strlen(str), str);
    printf("\nAfter\nSize: %d\nString: %s", strlen(str), remove_spaces(str));

    return 0;
}
char *remove_spaces(char a[])
{
    int i, j = 0;
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] != ' ' && a[i] != '\t' && a[i] != '\n')
        {
            a[j] = a[i];
            j++;
        }
    }
    a[j] = '\0';
    return a;
}