// Write a function to trim a string remove all whitespaces and make each word sparated by single space remove all extra spaces in between.

#include <stdio.h>
#include <string.h>

char *clean_spaces(char a[]);

int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("\nBefore\nSize: %d\nString: %s\n\n", strlen(str), str);
    printf("\nAfter\nSize: %d\nString: %s", strlen(str), clean_spaces(str));

    return 0;
}

char *clean_spaces(char a[])
{

    int i = 0, j = 0;
    while (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
        i++;
    int start = i, end = strlen(a) - 1;
    while (a[end] == ' ' || a[end] == '\t' || a[end] == '\n')
        end--;
    while (start <= end)
    {
        if (a[start] != ' ' && a[start] != '\t' && a[start] != '\n')
        {
            a[j] = a[start];
            j++;
        }
        else if (a[start - 1] != ' ' && a[start - 1] != '\t' && a[start - 1] != '\n')
        {
            a[j] = ' ';
            j++;
        }
        start++;
    }
    a[j] = '\0';
    return a;
}

// Method 2

/* char *clean_spaces(char a[])
{

    int i = 0, j = 0, inside_word = 0, end = strlen(a) - 1;
    while (i <= end)
    {
        if (a[i] != ' ' && a[i] != '\t' && a[i] != '\n')
        {
            a[j] = a[i];
            j++;
            inside_word = 1;
        }

        else if (inside_word)
        {
            a[j] = ' ';
            j++;
            inside_word = 0;
        }
        i++;
    }
    a[j - 1] = '\0';

    return a;
} */