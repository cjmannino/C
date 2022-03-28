/*VLA.c -- practice with Variable length Arrays */
#include <stdio.h>

void sum (int rows, int cols, int ar[rows][cols]);

int main(int argc, char const *argv[])
{
  int rows = 2;
  int cols = 3;
  int x, c;

  int vla[rows][cols];

  for (x = 0; x < rows; x++)
      for (c = 0; c < cols; c++)
        vla[x][c] = x * 100 + c + 100;

        sum(rows, cols, vla);


  return 0;
}


void sum (int rows, int cols, int ar[rows][cols])
{
  int r, c;
  int total = 0;

  printf("\nThe Average of Whole Array\n");
  for ( r = 0; r < rows; r++)
  {
      for (c = 0; c < cols; c++)
          total += ar[r][c];
  }
  printf("TOTAL: %d\n", total / 6 );
}
