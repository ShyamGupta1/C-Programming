// Write a program to find first occurrence of a given character in a given string.

#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char ch, str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    fflush(stdin);
    printf("Enter a Character: ");
    scanf("%c", &ch);
    for (i = 0; str[i]; i++)
        if (ch == str[i])
        {
            printf("\'%c\' found in %s at %d index", ch, str, i);
            break;
        }

    if (i == strlen(str))
        printf("\'%c\' not found in %s", ch, str);

    return 0;
}