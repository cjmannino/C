/*mysrraypoint.c*/
/*A sample array to function using pointers to point at beginning and end*/
#include <stdio.h>
#define MAX 5

void displayGrades (int * start, int * end);

int main (void)
{
    int grades[MAX] = {89,99,78,76,99};

    displayGrades (grades, grades + MAX);

}

void displayGrades (int * start, int * end)
{
    int x;
    for (x = 0; x < MAX; x++)
        printf("Grade: %d\n", start[x]);
}
