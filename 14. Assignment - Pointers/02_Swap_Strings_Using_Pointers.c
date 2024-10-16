// Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include <stdio.h>
#include <string.h>
void swap_strings(char *, char *);
int main()
{
    char str1[20], str2[20];
    printf("Enter 1st String: ");
    fgets(str1, 20, stdin);
    str1[strlen(str1) - 1] = '\0';
    printf("Enter 2nd String: ");
    fgets(str2, 20, stdin);
    str2[strlen(str2) - 1] = '\0';

    printf("Before:\nString 1: %s\nString 2: %s\n\n", str1, str2);
    swap_strings(str1, str2);
    printf("After:\nString 1: %s\nString 2: %s", str1, str2);

    return 0;
}

void swap_strings(char *a, char *b)
{
    int i;
    char temp[20];
    // Copy String 1 Elements in temp;

    for (i = 0; *(a + i); i++)
        temp[i] = a[i];
    temp[i] = '\0';

    // Copy String 2 in String 1;

    for (i = 0; *(b + i); i++)
        a[i] = b[i];
    a[i] = '\0';

    // Copy temp (String 1) to String 2;

    for (i = 0; *(temp + i); i++)
        b[i] = temp[i];
    b[i] = '\0';
}