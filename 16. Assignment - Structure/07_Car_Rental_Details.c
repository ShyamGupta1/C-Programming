/* Design a structure named "Car" to store details like car ID, model, and rental rate per day.
Write a C program to input data for three cars, calculate the total rental cost for a
 specified number of days, and display the results. */

#include <stdio.h>
#include <string.h>

struct Car
{
    int carID;
    char model[10];
    float rate;
};
void input(struct Car *C)
{
    printf("Car ID: ");
    scanf("%d", &C->carID);
    fflush(stdin);
    printf("Model: ");
    fgets(C->model, sizeof C->model, stdin);
    C->model[strlen(C->model) - 1] = '\0';
    printf("Rental Rate per Day: ");
    scanf("%f", &C->rate);
}

int main()
{
    int i, days;
    struct Car C[3];

    for (i = 0; i < 3; i++)
    {
        printf("Input details for Car %d:\n", i + 1);
        input(&C[i]);
        printf("\n");
    }
    printf("Enter the number of rental days: ");
    scanf("%d", &days);
    printf("\n");
    for (i = 0; i < 3; i++)
        printf("Total Rental Cost for Car %d: %.2f\n", i + 1, days * C[i].rate);
    return 0;
}
