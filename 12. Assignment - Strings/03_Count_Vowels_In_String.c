// Write a program to count vowels in a given string

#include <stdio.h>
#include <string.h>
int count_vowels(char str[]);
int main()
{
    char str[50];
    printf("Enter a String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';
    printf("Total number of vowels are: %d", count_vowels(str));
    return 0;
}
int count_vowels(char str1[])
{
    char str2[11] = "aeiouAEIOU";
    int i, j, count;
    for (i = 0, count = 0; str2[i]; i++)
        for (j = 0; str1[j]; j++)

            if (str2[i] == str1[j])
                count++;
    return count;
}

/*
int count_vowels(char str1[])
{
    char str2[11] = "aeiouAEIOU";
    int i, j, count;
    for (i = 0, count = 0; str1[i]; i++)
        for (j = 0; str2[j]; j++)
            if (str1[i] == str2[j])
            {
                count++;
                break;
            }
    return count;
}
*/