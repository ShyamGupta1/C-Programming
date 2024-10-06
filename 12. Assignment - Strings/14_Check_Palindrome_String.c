// Write a function to check whether a given string is palindrome or not.

#include <stdio.h>
#include <string.h>
void check_Palindrome(char a[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    check_Palindrome(str);
    return 0;
}

void check_Palindrome(char a[])
{
    int start, end;
    start = 0;
    end = strlen(a) - 1;
    while (start < end)
    {
        if (a[start] != a[end])
        {
            printf("Not Palindrome");
            return;
        }
        start++;
        end--;
    }
    printf("Palindrome");
}

/*
void check_Palindrome(char a[])
{
    int i, l;
    l = strlen(a) - 1;
    for (i = 0; i < strlen(a) / 2; i++)
        if (a[i] != a[l - i])
        {
            printf("Not Palindrome");
            return;
        }
    printf("Palindrome");
}
*/
