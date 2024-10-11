// Write a program to find the number of vowels in each of the 5 strings stored in twodimensional arrays, taken from the user.

#include <stdio.h>
#include <string.h>

void count_Vowels(char a[][20], int n)
{
    char vowel[] = "aeiouAEIOU";

    int i, j, k, count;

    for (k = 0; k < n; k++)
    {
        for (i = 0, count = 0; vowel[i]; i++)
        {
            for (j = 0; a[k][j]; j++)
                if (vowel[i] == a[k][j])
                    count++;
        }
        printf("%s - %d\n", a[k], count);
    }
}
void input(char a[][20], int n)
{
    int i;
    printf("Enter %d Strings: ", n);
    for (i = 0; i < n; i++)
    {
        fgets(a[i], 20, stdin);
        a[i][strlen(a[i]) - 1] = '\0';
    }
}
int main()
{
    int n;
    printf("Enter number of strings you want to enter: ");
    scanf("%d", &n);
    getchar();
    char str[n][20];
    input(str, n);
    printf("\n");
    count_Vowels(str, n);
}