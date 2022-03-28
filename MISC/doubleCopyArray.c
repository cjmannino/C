/*doubleCopyArray.c -- initialize a double array and copy it*/
/*program exercise #7 pg.443*/
#include <stdio.h>

#define ROWS 2
#define COLS 2

void arrayCopy(int rows, int cols,  double source[][COLS], double target[][COLS], int row);

int main (void)
{
  double source[ROWS][COLS] = { {123.45, 456.67},
                                {890.12, 765.32} };
  double target[ROWS][COLS];

  arrayCopy(ROWS, COLS, source, target, 2);

  return 0;
}
void arrayCopy(int rows, int cols, double source[][COLS], double target[][COLS], int row)
{
  /*
  target[0][0] = source [0][0];
  target[0][1] = source [0][1];
  target[1][0] = source [1][0];
  target[1][1] = source [1][1];

  printf("target[0][0]= %.2f\n", target[0][0]);
  printf("target[0][1]= %.2f\n", target[0][1]);
  printf("target[1][0]= %.2f\n", target[1][0]);
  printf("target[1][1]= %.2f\n", target[1][1]);
  */
  int x, c;
  for (x = 0; x <= 1; x++)
  {
      for (c = 0; c < COLS; c++)
      {
          target[x][c] = source[x][c];
          printf("target[%d][%d]= %.2f\n",x,c, target[x][c]);
      }

  }
}
