// Write a program to convert a string in reverse using a pointer
// Write a Function to Convert a given string in to Lowercase and Uppercase

#include <stdio.h>
#include <string.h>
void reverse(char *a)
{
    int start = 0, end = strlen(a) - 1;

    while (start < end)
    {
        *(a + start) = *(a + start) + *(a + end) - (*(a + end) = *(a + start));
        start++;
        end--;
    }
    printf("%s", a);
}
void upper(char *a)
{
    int i;
    for (i = 0; i < strlen(a); i++)
        if (*(a + i) >= 'a' && *(a + i) <= 'z')
            *(a + i) = *(a + i) - 32;
    printf("%s", a);
}
void lower(char *a)
{
    int i;
    for (i = 0; i < strlen(a); i++)
        if (*(a + i) >= 'A' && *(a + i) <= 'Z')
            *(a + i) = *(a + i) + 32;
    printf("%s", a);
}
int main()
{
    char *ptr, str[20];
    ptr = str;
    printf("Enter a String: ");
    fgets(ptr, sizeof str, stdin);
    ptr[strlen(ptr) - 1] = '\0';
    reverse(str);
    return 0;
}
