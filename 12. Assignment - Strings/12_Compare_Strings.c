// Write a function to compare two strings in lexicographic order (Do not use strcmp)

#include <stdio.h>
#include <string.h>
int str_cmp(char a[], char b[]);
int main()
{
    char str1[50], str2[50];
    printf("Enter 1st String: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strlen(str1) - 1] = '\0';
    fflush(stdin);
    printf("Enter 2nd String: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strlen(str2) - 1] = '\0';

    printf("%d", str_cmp(str1, str2));

    return 0;
}

int str_cmp(char a[], char b[])
{
    int i = 0;
    if (strlen(a) <= strlen(b))
    {
        while (strlen(a) + 1 - i)
        {
            if (a[i] == b[i])
            {
                i++;
                continue;
            }
            if (a[i] - b[i] > 0)
                return 1;
            else
                return -1;
        }
        return 0;
    }
    else
    {
        while (strlen(b) + 1 - i)
        {
            if (b[i] == a[i])
            {
                i++;
                continue;
            }
            if (b[i] - a[i] > 0)
                return 1;
            else
                return -1;
        }
        return 0;
    }
}
