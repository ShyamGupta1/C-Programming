// Write a function to count frequency of each character of the given string.

#include <stdio.h>
#include <string.h>

void count_frequency(char *a);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    count_frequency(str);
}
void count_frequency(char *a)
{
    int i;
    int freq[256] = {};
    for (i = 0; a[i]; i++)
        freq[a[i]]++;
    for (i = 0; i < 256; i++)
    {
        if (freq[i])
            printf("\'%c\' - %d times\n", i, freq[i]);
    }
}