#include <stdio.h>

void printDaysInMonth();
int main()
{

    printDaysInMonth();
    printf("\n");

    return 0;
}

void printDaysInMonth()
{
    int month;
    printf("Enter Month Number: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 Days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 Days");
        break;
    case 2:
        printf("28 days (29 days in a leap year)");
        break;

    default:
        printf("Invalid Month Number");
        break;
    }
}