// Write a function to sort employees according to their Name.

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

struct Employee *sort_by_Name(struct Employee *arr, int n)
{
    struct Employee temp;
    int round, i;
    for (round = 1; round < n; round++)
        for (i = 0; i < n - round; i++)
            if (strcmp(arr[i].name, arr[i + 1].name) == 1)
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
    return arr;
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
    struct Employee *p = sort_by_Name(arr, 5);
    for (i = 0; i < 5; i++)
    {
        printf("Employee %d\n", i + 1);
        Display(*(p + i));
        printf("\n\n");
    }

    return 0;
}