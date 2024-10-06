// Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>
#include <string.h>
void count_Characters(char a[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // Replace newline with null char
    count_Characters(str);
    return 0;
}

void count_Characters(char a[])
{
    int i, alpha = 0, digit = 0, sc = 0;
    for (i = 0; a[i]; i++)
    {
        if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
            alpha++;
        else if (a[i] >= '0' && a[i] <= '9')
            digit++;
        else
            sc++;
    }
    printf("Total No. of Alphabets: %d\nTotal No. of Digits: %d\nTotal No. of Special Characters: %d", alpha, digit, sc);
}

/*
void count_Characters(char a[])
{
    int i, alpha = 0, digit = 0, sc = 0;
    for (i = 0; a[i]; i++)
        switch (a[i])
        {
        case 'a' ... 'z':
        case 'A' ... 'Z':
            alpha++;
            break;
        case '0' ... '9':
            digit++;
            break;
        default:
            sc++;
        }
    printf("Total No. of Alphabets: %d\nTotal No. of Digits: %d\nTotal No. of Special Characters: %d", alpha, digit, sc);
}
*/
