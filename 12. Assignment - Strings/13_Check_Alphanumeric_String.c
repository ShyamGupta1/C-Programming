/*
Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)
*/

#include <stdio.h>
#include <string.h>

void is_Alphanumeric(char a[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    is_Alphanumeric(str);
    return 0;
}

void is_Alphanumeric(char a[])
{
    int i, count = 0, digit = 0;
    for (i = 0; a[i]; i++)
        switch (a[i])
        {
        case '0' ... '9':
            digit++;
            break;
        case 'a' ... 'z':
        case 'A' ... 'Z':
            count++;
            break;
        default:
            break;
        }
    if (count && digit)
        printf("Given string is an alphanumeric string");
    else
        printf("Given string is not an alphanumeric string");
}
