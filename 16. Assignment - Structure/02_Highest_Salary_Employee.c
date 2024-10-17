// Write a function to find the highest salary employee from a given array of 5 employees.

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
    int i;

    struct Employee arr[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter Data of Employee %d\n", i + 1);
        arr[i] = input();
    }
    struct Employee max = arr[0];
    for (i = 0; i < 5; i++)
        if (arr[i].salary > max.salary)
            max = arr[i];
    printf("Employee with maximum salary\n");
    Display(max);
    return 0;
}