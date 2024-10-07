// Write a function to count words in a given string.

#include <stdio.h>
#include <string.h>
int count_Words(char a[]);
int main()
{

    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("Total words: %d", count_Words(str));

    return 0;
}
int count_Words(char a[])
{
    int i = 0, count = 0, flag = 0;
    while (a[i])
    {
        if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
            flag = 0;
        else if (flag == 0)
        {
            flag = 1;
            count++;
        }
        i++;
    }
    return count;
}