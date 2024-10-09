// Write a function to make first character of each word of the string capital.

#include <stdio.h>
#include <string.h>

char *capital_first(char *a);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("%s", capital_first(str));
}
char *capital_first(char *a)
{
    int i = 0, inword = 0;
    while (a[i])
    {
        if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
        {
            inword = 0;
        }
        else if (inword == 0)
        {
            if (a[i] >= 'a' && a[i] <= 'z')
                a[i] -= 32;
            inword = 1;
        }
        i++;
    }
    return a;
}