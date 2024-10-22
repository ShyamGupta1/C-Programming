/* Define a structure Student with name, roll number and college name as members.
Define another structure Team with two Student type variables as members.
Define a method to dynamically create a Student type variable and initialise with the
values received in the arguments. Return address of Student type variable.
Define a method to dynamically create Team variable, initialise it with
the received arguments. Return address of the Team variable.
Define a method to display data of Student type, also define a method
to display data of Team */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[20];
    int roll;
    char college[20];
};

struct Team
{
    struct Student S1, S2;
};

struct Student input_Student()
{
    struct Student Stu;
    printf("Enter Student Name: ");
    fgets(Stu.name, sizeof Stu.name, stdin);
    Stu.name[strlen(Stu.name) - 1] = '\0';
    fflush(stdin);
    printf("Enter Roll No.: ");
    scanf("%d", &Stu.roll);
    fflush(stdin);
    printf("Enter College Name: ");
    fgets(Stu.college, sizeof Stu.college, stdin);
    Stu.college[strlen(Stu.college) - 1] = '\0';
    return Stu;
}

struct Student *initialise(char *name, int roll, char *college)
{

    struct Student *Stu;
    Stu = (struct Student *)malloc(sizeof(struct Student));
    strcpy(Stu->name, name);
    Stu->roll = roll;
    strcpy(Stu->college, college);
    return Stu;
};

void display_Student(struct Student *student)
{
    printf("\nName: %s\n", student->name);
    printf("Roll No.: %d\n", student->roll);
    printf("College: %s", student->college);
}

struct Team *newTeam(struct Student Stu1, struct Student Stu2)
{
    struct Team *T1;
    T1 = (struct Team *)malloc(sizeof(struct Team));
    T1->S1 = Stu1;
    T1->S2 = Stu2;
    return T1;
}

void display_Team(struct Team *Team1)
{
    display_Student(&Team1->S1);
    display_Student(&Team1->S2);
}
int main()
{
    struct Student Stu1, Stu2;
    printf("Enter Data of Student 1:\n");
    Stu1 = input_Student();
    printf("Enter Data of Student 2:\n");
    Stu2 = input_Student();
    printf("\nTeam 1\n");
    display_Team(newTeam(Stu1, Stu2));

    return 0;
}
