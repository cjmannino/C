/*copyVLA.c -- make a 3x5 array and use VLA function to copy it and display*/
/*program exercise 9 pg.440*/
#include <stdio.h>
#define ROWS 3
#define COLS 5

void swap (int rows, int cols, int source[rows][cols], int target[rows][cols]);
void display (int rows, int cols, int source[rows][cols], int target[rows][cols]);


int main(int argc, char const *argv[])
{
  int source[ROWS][COLS] =  { {2,6,8,3,8},
                              {9,6,3,2,1},
                              {6,3,8,7,9} };
  int target[ROWS][COLS];

  swap(ROWS, COLS, source, target);
  display(ROWS, COLS, source, target);


  return 0;
}

void swap (int rows, int cols, int source[rows][cols], int target[rows][cols])
{
    int x,c;

    for (x = 0; x < ROWS; x++)
    {
        for (c = 0; c < COLS; c++)
        {
            target[x][c] = source[x][c];
        }
    }
}

void display (int rows, int cols, int source[rows][cols], int target[rows][cols])
{
    int x, c;

    for (x = 0; x < rows; x++)
    {
        for (c = 0; c < cols; c++)
        {
            printf("source[%d][%d]= %d", x, c, source[x][c]);
            printf("      target[%d][%d]= %d\n", x, c, target[x][c]);
        }
    }

}
