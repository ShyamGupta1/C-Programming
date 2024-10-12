// Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.

#include <stdio.h>
#include <string.h>

void input(char a[][50], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter city %d: ", i + 1);
        fgets(a[i], 50, stdin);
        a[i][strlen(a[i]) - 1] = '\0';
    }
}
void sort_Strings(char a[][50], int n)
{
    char temp[50];
    int round, k;
    // Bubble Sort
    for (round = 1; round < n; round++)
        for (k = 0; k < n - round; k++)
            if (strcmp(a[k], a[k + 1]) == 1)
            {
                strcpy(temp, a[k + 1]);
                strcpy(a[k + 1], a[k]);
                strcpy(a[k], temp);
            }
}

int main()
{
    char str[10][50];
    printf("Enter 10 city names\n");
    input(str, 10);
    sort_Strings(str, 10);
    printf("Sorted City Names: \n");
    for (int i = 0; i < 10; i++)
        printf("%s\n", str[i]);
    return 0;
}