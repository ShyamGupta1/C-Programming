// Write a program to calculate the difference between two time periods.

#include <stdio.h>
#include <stdlib.h>

struct Time
{
    int hours, min, sec;
};

void input(struct Time *T)
{
    scanf("%d:%d:%d", &T->hours, &T->min, &T->sec);
}
struct Time differ(struct Time t1, struct Time t2)
{
    struct Time temp;
    int seconds = abs((t1.hours * 3600 + t1.min * 60 + t1.sec) - (t2.hours * 3600 + t2.min * 60 + t2.sec));
    temp.hours = seconds / 3600;
    temp.min = (seconds - (temp.hours * 3600)) / 60;
    temp.sec = seconds - temp.hours * 3600 - temp.min * 60;
    return temp;
}

int main()
{
    struct Time t1, t2, diff;

    printf("Enter time 1 in this formate (HH:MM:SS): ");
    input(&t1);
    printf("Enter time 2 in this formate (HH:MM:SS): ");
    input(&t2);
    diff = differ(t1, t2);
    printf("\nTime Difference -> %d:%d:%d", diff.hours, diff.min, diff.sec);

    return 0;
}