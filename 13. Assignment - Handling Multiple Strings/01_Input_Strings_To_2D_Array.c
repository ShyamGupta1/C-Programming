// Write a function to store strings, taken from user, to the given 2d char array.

#include <stdio.h>
#include <string.h>
void input(char a[][20], int n)
{
    int i;
    printf("Enter %d Strings: ", n);
    for (i = 0; i < n; i++)
    {
        fgets(a[i], 20, stdin);
        a[i][strlen(a[i]) - 1] = '\0';
    }
    for (i = 0; i < n; i++)
        printf("%s\n", a[i]);
}
int main()
{
    int n;
    printf("Enter number of strings you want to enter: ");
    scanf("%d", &n);
    getchar(); // To remove the newline char from the input buffer
    char str[n][20];
    input(str, n);
}