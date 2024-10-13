/*
Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.
*/

#include <stdio.h>
#include <string.h>
void check_Mail(char a[][30], int n)
{
    int i, j, flag;
    for (i = 0; i < n; i++)
    {
        for (j = 0, flag = 0; a[i][j]; j++)
        {
            if (a[i][j] == '@')
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
            printf("%s\n", a[i]);
    }
}

int main()
{

    char email_addresses[5][30] =
        {
            "user@example.com",
            "invalid-email.com",
            "another.user@example.org",
            "no-at-sign.com",
            "user.with@domain.com"};
    check_Mail(email_addresses, 5);

    return 0;
}