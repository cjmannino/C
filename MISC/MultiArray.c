/*multarray.c -- use with pointer to understand concept*/
#include <stdio.h>
#define ROWS  3
#define COLS  4
#define NROWS 2
#define NCOLS 2

//void arrayDisplay (int numbs[ROWS][COLS]);
int arrayDisplay(int rows, int cols, int ar[rows][cols]);
int sum2d(int rows, int cols, int ar[rows][cols]);

int main (void)
{

  int numbs[ROWS][COLS] = { {123,456,679,932},
                            {345,612,912,895},
                            {986,123,678,345} };

  int moreNumbs[NROWS][NCOLS] = { {782,653},
                                  {391,567} };

arrayDisplay(ROWS, COLS, numbs);
printf("Sum of numbs:            %d\n", sum2d(ROWS, COLS, numbs) );
arrayDisplay(NROWS, NCOLS, moreNumbs);
printf("Sum moreNumbs:           %d\n", sum2d(NROWS, NCOLS, moreNumbs) );
arrayDisplay(1, COLS, numbs);
printf("Sum of numbs first row:  %d\n", sum2d(1, COLS, numbs) );

  /*
  int (*ptr)[2];
  ptr = numbs;

  printf("Get address without Pointer\n");
  printf("The address of numbs:       %p\n", &numbs);
  printf("The address of numbs[0]:    %p\n", &numbs);
  printf("The address of numbs[0][0]: %p\n", &numbs);

  printf("\nUsing pointer notion to get address\n");
  printf("The address of numbs:       %p\n", *numbs);
  printf("The address of numbs[0]:    %p\n", *(numbs) );
  printf("The address of numbs[0][0]: %p\n", *(numbs+1) );

  printf("\nDeferencing using pointer notion & index\n");
  printf("numbs[1][1]:        %d\n", numbs[1][1]);
  printf("numbs[2][0] using * %d\n", *(*(numbs+1) + 1) );
  printf("\nnumbs[0][3]:        %d\n", numbs[0][3]);
  printf("numbs[0][3] using * %d\n", *(*(ptr) + 3) );

  printf("Using ptr for pointer: numbs[0][3]=%d\n", *(*(numbs) +3) );
  printf("Using ptr for pointer: numbs[2][3]=%d\n", *(*(ptr+1) +3) );
*/
return 0;
}

int arrayDisplay(int rows, int cols, int ar[rows][cols])
{
  int r;
  int c;

  for (r = 0; r < rows; r++)
  {
      for(c = 0; c < cols; c++)
      {
          printf("%5d ", ar[r][c]);
      }
          printf("\n");
   }
   return 0;
}
int sum2d(int rows, int cols, int ar[rows][cols])
{
  int r;
  int c;
  int tot = 0;

  for (r = 0; r < rows; r++)
      for (c = 0; c < cols; c++)
          tot += ar[r][c];
  return tot;

}
