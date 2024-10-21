/* Define a function to input variable length string and store it
in an array without memory wastage. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *input_String()
{
    char ch, *p = NULL, *q = NULL;
    int i, length = 1;
    p = (char *)malloc(length);
    *p = '\0';
    while (1)
    {
        ch = getc(stdin); // getchar();
        if (ch == '\n')
            break;
        q = (char *)malloc(length + 1);
        for (i = 0; i < length; i++)
            *(q + i) = *(p + i);
        *(q + i - 1) = ch;
        *(q + i) = '\0';
        free(p);
        length++;
        p = (char *)malloc(length);
        for (i = 0; i < length; i++) // strcpy(p,q);
            *(p + i) = *(q + i);
        free(q);
    }

    return p;
}

/* char *input_String1()
{
    char *s = NULL;
    char ch;
    int length = 0;

    while (1)
    {
        ch = getc(stdin);
        if (ch == '\n')
            break;
        length++;
        s = (char *)realloc(s, length + 1);
        *(s + length - 1) = ch;
        *(s + length) = '\0';
    }
    return s;
} */

int main()
{
    char *str;
    printf("Enter a String ");
    str = input_String1();
    printf("%s", str);

    return 0;
}
