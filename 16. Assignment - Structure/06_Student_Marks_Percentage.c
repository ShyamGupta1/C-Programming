/* Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student. */

#include <stdio.h>
#include <string.h>
struct Marks
{
    int roll_no;
    char name[20];
    float chem_marks, math_marks, phy_marks;
};

void input(struct Marks *m)
{
    printf("Enter Roll No.: ");
    scanf("%d", &m->roll_no);
    fflush(stdin);
    printf("Enter Name: ");
    fgets(m->name, sizeof m->name, stdin);
    m->name[strlen(m->name) - 1] = '\0';
    printf("Enter Chemistry Marks: ");
    scanf("%f", &m->chem_marks);
    printf("Enter Maths Marks: ");
    scanf("%f", &m->math_marks);
    printf("Enter Physics Marks: ");
    scanf("%f", &m->phy_marks);
}

float perc(struct Marks m)
{
    float perc = (m.chem_marks + m.math_marks + m.phy_marks) * 100 / 300;
    return perc;
}

int main()
{
    struct Marks s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of student %d\n", i + 1);
        input(&s[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nStudent %d Percentsge: %.2f\n", i + 1, perc(s[i]));
    }
}