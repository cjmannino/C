/*userArray.c -- prompts user to enter 3x5 array of double values*/
#include <stdio.h>
#define ROWS 3
#define COLS 5
#define MAX 15

void getValues (double (*ar)[COLS], int rows);
void arrayDisplay(const double (*ar)[COLS], int rows);
void getRowAverage(const double (*ar)[COLS], int rows);
void getWholeAverage(const double (*ar)[COLS], int rows);
void getLargeSmallArrayElement (const double (*ar)[COLS], int rows);


int main(int argc, char const *argv[])
{
  double values[ROWS][COLS];

  getValues(values, ROWS);
  arrayDisplay(values, ROWS);
  getRowAverage(values, ROWS);
  getWholeAverage(values, ROWS);
  getLargeSmallArrayElement(values, ROWS);

  return 0;
}

void getValues (double (*ar)[COLS], int rows)
{
    int r, c;
    printf("Please enter 15 doubles to full 3x5 array:\n");
    for (r = 0; r < MAX; r++)
    {
        printf("%d# ", r);
        scanf("%lf", &ar[0][r]);//Remember ar is the address of two-dimensional
    } // array, thus ar an ar[][] are the same. Pg.419
}
void arrayDisplay(const double (*ar)[COLS], int rows)
{
  int r;
  int c;

  printf("          Values 3x5 Double Array \n");

  for (r = 0; r < rows; r++)
  {
      for(c = 0; c < COLS; c++)
      {
          printf("%7.2f ", ar[r][c]);
      }

          printf("\n");
   }

}

void getRowAverage(const double (*ar)[COLS], int rows)
{
  int r, c;
  double total;
  printf("\n");
  for ( r = 0; r < rows; r++)
  {
    total = 0;
    for (c = 0; c < COLS; c++)
        total += ar[r][c];
    printf("Average of rows#%d = %.2f\n", r, total / 5);
  }
}
void getWholeAverage (const double (*ar)[COLS], int rows)
{
  int r, c;
  double total = 0;

  printf("\nThe Average of Whole Array\n");
  for ( r = 0; r < rows; r++)
  {
      for (c = 0; c < COLS; c++)
          total += ar[r][c];
  }
  printf("Average= %.2f\n", total / MAX);
}
void getLargeSmallArrayElement (const double (*ar)[COLS], int rows)
{
    double high = 0;
    double low = 0;
    int r, c;
    low = high = ar[0][0]; // focus here

    for (r = 0; r < rows; r++)
      {
            for (c = 0; c < COLS; c++)
            {
                if(low > ar[r][c])
                low = ar[r][c];

                if (high < ar[r][c])
                high = ar[r][c];
            }
      }
   printf(" \nHigh: %.2f Low: %.2f \n", high, low);

}//end of routine
