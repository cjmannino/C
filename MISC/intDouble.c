/*intDouble.c -- program that initialize ints, funtion double their values */
/*another functions prints the new doubled values*/
/*PG.440 exercise 11*/
#include <stdio.h>

#define ROWS 3
#define COLS 5

void display (int (*sr)[COLS], int rows);
void intDouble (int (* sr)[COLS], int(* tr)[COLS], int rows);

int main(int argc, char const *argv[])
{
  int source[ROWS][COLS] =  { {2,6,8,1,9},
                              {9,6,3,2,1},
                              {6,3,8,7,9} };
  int target[ROWS][COLS];

  printf("BEFORE DOUBLING!\n");
  display(source, ROWS);
  printf("\nDOUBLED\n");
  intDouble(source, target, ROWS);

  return 0;
}

void display (int (*sr)[COLS], int rows)
{
    int r, c;
    for (r = 0; r < rows; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            printf("sr[%i][%i]= %d\n", r, c, sr[r][c]);
        }
    }
} //end of routine

void intDouble (int (*sr)[COLS], int (*tr)[COLS], int rows)
{

  int r, c;
  for (r = 0; r < rows; r++)
  {
        for (c = 0; c < COLS; c++)
          printf("sr[%i][%i] %i\n", r, c, sr[r][c] + sr[r][c]);
    }

}
