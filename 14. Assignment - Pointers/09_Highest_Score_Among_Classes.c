/* There are five classes with different number of students in them. Five arrays
containing marks of students of each class. Write a function to receive an address
of an array of pointers to access marks of all the students. The job of function is to
find the highest marks among all the classes. */

#include <stdio.h>

int highest_Marks(int **, int *);
int main()
{
    int class1[5] = {67, 45, 87, 54, 72};
    int class2[4] = {34, 90, 94, 43};
    int class3[7] = {54, 76, 43, 78, 41, 96, 30};
    int class4[8] = {23, 41, 92, 35, 38, 74, 48, 75};
    int class5[6] = {17, 37, 99, 29, 85, 88};
    int *ptr[5];
    int size[5] = {5, 4, 7, 8, 6};
    ptr[0] = class1;
    ptr[1] = class2;
    ptr[2] = class3;
    ptr[3] = class4;
    ptr[4] = class5;
    printf("Highest Marks : %d", highest_Marks(ptr, size));

    return 0;
}
int highest_Marks(int **ptr, int *size)
{
    int max = **ptr; // ptr[0][0];
    int i, j;
    for (i = 0; i < 5; i++)
        for (j = 0; j < *(size + i); j++)
            if (*(*(ptr + i) + j) > max)
                max = *(*(ptr + i) + j);
    return max;
}