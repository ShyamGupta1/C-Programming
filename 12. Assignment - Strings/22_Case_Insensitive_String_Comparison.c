// Write a function to do case insensitive comparison of two strings.

#include <stdio.h>
#include <string.h>

int case_insensitive_compare(char *a, char *b);
int main()
{
    char str1[50], str2[50];
    printf("Enter 1st String: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0';
    printf("Enter 2nd String: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0';
    printf(case_insensitive_compare(str1, str2) ? "Strings are equal" : "Strings aren't equal");
}
int case_insensitive_compare(char *a, char *b)
{
    int i;
    for (i = 0; i < strlen(a); i++)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
    for (i = 0; i < strlen(b); i++)
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;
    if (strlen(a) != strlen(b))
        return 0;
    else
    {
        for (i = 0; a[i] && b[i]; i++)
            if (a[i] != b[i])
                return 0;
        return 1;
    }
}
