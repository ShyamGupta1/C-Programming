/*
Write a function to reverse a string word wise.
“My name is shyam gupta” then the resulting string should be “gupta shyam is name My”
*/

#include <stdio.h>
#include <string.h>

int count_Word(char a[]);
char *reverse_String(char a[]);
int main()
{
    int i;
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("%s", reverse_String(str));
    return 0;
}
int count_Word(char a[])
{
    int i = 0, count = 0, inWord = 0;
    while (i <= strlen(a) - 1)
    {
        if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
            inWord = 0;
        else if (inWord == 0)
        {
            count++;
            inWord = 1;
        }
        i++;
    }
    return count;
}

char *reverse_String(char a[])
{
    int j = 0, i = 0, start = 0, inWord = 0;
    char b[count_Word(a)][50];
    while (a[i])
    {
        if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
        {
            start++;
            inWord = 0;
        }
        else if (inWord == 0)
        {
            int k;
            for (k = 0; (k < 50) && (a[start] != ' ' && a[start] != '\t' && a[start] != '\n'); k++)
            {

                b[j][k] = a[start];
                start++;
            }
            b[j][k] = '\0';
            j++;
            inWord = 1;
        }
        i++;
    }
    int p = 0;
    for (i = count_Word(a) - 1; i >= 0; i--)
    {
        for (j = 0; b[i][j]; j++, p++)
        {
            a[p] = b[i][j];
        }
        a[p] = ' ';
        p++;
    }
    a[p] = '\0';
    return a;
}