// Write a program to print the strings which are palindrome in the list of strings.

#include <stdio.h>
#include <string.h>

void check_Palindrome(char a[][50], int n)
{
    int flag = 1, k, i, start, end;
    for (k = 0; k < n; k++)
    {
        start = 0;
        end = strlen(a[k]) - 1;
        while (start < end)
        {
            if (a[k][start] != a[k][end])
                break;
            start++;
            end--;
        }
        if (start == strlen(a[k]) / 2)
        {
            flag = 0;
            printf("%s\n", a[k]);
        }
    }
    if (flag)
        printf("No Palindrome String Found");
}

void input(char a[][50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter %d String: ", i + 1);
        fgets(a[i], 50, stdin);
        a[i][strlen(a[i]) - 1] = '\0';
    }
}
int main()
{

    char str[5][50];
    printf("Enter 5 Strings: ");
    input(str, 5);
    check_Palindrome(str, 5);

    return 0;
}
