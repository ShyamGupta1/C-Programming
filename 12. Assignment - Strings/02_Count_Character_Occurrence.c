// Write a program to count the occurrence of a given character in a given string.

#include <stdio.h>
#include <string.h>

int count_char();
int main()
{
    int n;
    printf("%d times", count_char());
    return 0;
}
int count_char()
{
    int i, count;
    char ch, str[50];
    printf("Enter a String: ");
    fgets(&str[0], sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    fflush(stdin);
    printf("Enter a Character: ");
    scanf("%c", &ch);
    for (i = 0, count = 0; str[i]; i++)
        if (ch == str[i])
            count++;
    return count;
}
