#include <stdio.h>

int main()
{
    char c, b;
    int date, month, year;
    printf("Enter Date, Month and Year in DD/MM/YYYY: ");
    scanf("%d/%d/%d", &date, &month, &year);
    printf("Day - %d , Month - %d , Year - %d", date, month, year);
    printf("\n");
    return 0;
}