/*vla.c -- learn vla arrays */
#include <stdio.h>
#define ROWS 4
#define COLS 3
void display(int ar[][COLS], int n);
int process(int rows, int cols, int ar[ROWS][COLS]);

int main(void)
{

    int i, j;
    int cs = 3;
    int rs = 2;

    int numbs[ROWS][COLS] = {
          {2,4,6},
          {4,8,12},
          {3,6,9},
          {12,14,16}
    };
    display(numbs, ROWS);
    printf("Sum of all the elements(VLA)[3][2] = %i\n", process(rs, cs, numbs) );
    printf("Sum of all the elements = %i\n", process(ROWS, COLS, numbs) );

    return 0;

}
void display(int ar[][COLS], int n)
{
    int r,c;
    for (r = 0; r < ROWS; r++)
        for(c = 0; c < COLS; c++)
            printf("Numbs[%i][%i]= %i\n", r, c, ar[r][c]);
  printf("*********************************************************\n");

}

int process(int rows, int cols, int ar[ROWS][COLS])
{
    int r;
    int c;
    int tot = 0;

    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
           tot += ar[r][c];

    //printf("Total: %i\n", tot);
    return tot;

}
