// Write a program to calculate the length of the string using a pointer

#include <stdio.h>
int str_Length(char *);
int main()
{
    char str[20];
    printf("Enter a String: ");
    fgets(str, 20, stdin);
    str[str_Length(str) - 1] = '\0';
    printf("String Length: %d", str_Length(str));

    return 0;
}
int str_Length(char *a)
{
    int i;
    for (i = 0; *(a + i); i++)
        ;
    return i;
}
