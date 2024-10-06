// Write a program to calculate the length of the string. (without using built-in method)

#include <stdio.h>
#include <string.h>

int str_len(char a[]);
int main()
{

    char str[20];
    printf("Enter a String: ");
    fgets(str, 20, stdin);
    printf("Length of the string is: %d", str_len(str));
    return 0;
}
int str_len(char a[])
{
    int i;
    for (i = 0; a[i] != '\n'; i++)
        ;
    return i;
}

/*
for (i = 0; a[i]; i++)
        if (a[i] == '\n')
        {
            a[i] = '\0';
            return i;
        }
*/

/*
void fl()
{
    char str[50];
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    for (len = 0; str[len]; len++)
        ;

    printf("Length is: %d\n", len);
}
*/