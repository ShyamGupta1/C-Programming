#include <stdio.h>

int main()
{
    char a;
    printf("Enter a alphabet: ");
    scanf("%c", &a);
    if ('A' <= a && a <= 'Z')
        printf("Uppercase");
    else
    {
        if ('a' <= a && a <= 'z')
            printf("Lowercase");
        else
            printf("Not a valid alphabet");
    }
    return 0;
}
