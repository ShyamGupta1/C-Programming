/*
Write a function to make acronym name from a given name. For example, "Ramesh
Chand Tiwari" becomes "R C Tiwari", "Shyam Gupta" becomes "S Gupta"
*/

#include <stdio.h>
#include <string.h>

int word_Count(char a[])
{
    int i = 0, count = 0, inword = 0;
    while (a[i])
    {
        if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
            inword = 0;
        else if (inword == 0)
        {
            inword = 1;
            count++;
        }
        i++;
    }
    return count;
}

void acronym(char a[])
{
    char acr[20];
    int i = 0, j = 0, inword = 0, words = word_Count(a);
    while (a[i])
    {
        if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n')
            inword = 0;
        else if (inword == 0 && words > 1)
        {
            acr[j] = a[i];
            j++;
            acr[j] = ' ';
            j++;
            inword = 1;
            words--;
        }
        else if (inword == 0 && words == 1)
        {
            while (a[i])
            {
                acr[j] = a[i];
                j++;
                i++;
            }
            i--;
            acr[j] = '\0';
        }
        i++;
    }
    printf("%s", acr);
}
int main()
{
    char str[20];
    printf("Enter your name: ");
    fgets(str, 20, stdin);
    str[strlen(str) - 1] = '\0';
    acronym(str);
}