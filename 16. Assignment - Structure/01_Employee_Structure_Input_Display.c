/* Define a structure Employee with member variables id, name, salary
Write a function to take input employee data from the user. Write a function to display employee data. */

#include <stdio.h>
#include <string.h>
struct Employee
{
    int employeeID;
    char name[20];
    float salary;
};
struct Employee input()
{
    struct Employee E;
    printf("Enter Employee ID: ");
    scanf("%d", &E.employeeID);
    fflush(stdin);
    printf("Enter Employee Name: ");
    fgets(E.name, sizeof E.name, stdin);
    E.name[strlen(E.name) - 1] = '\0';
    printf("Enter Employee Salary: ");
    scanf("%f", &E.salary);
    return E;
};
void Display(struct Employee E)
{
    printf("ID: %d\nName: %s\nSalary: %f", E.employeeID, E.name, E.salary);
}

int main()
{

    struct Employee E1;
    E1 = input();
    Display(E1);
    return 0;
}