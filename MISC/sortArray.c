/* sortArray.c -- sort an array in alphabetic order PG,492*/
#include <stdio.h>
#include <string.h>
#define ROWS 5
#define LENGTH 5

int main(int argc, char const *argv[])
{

  char alpha[ROWS][LENGTH] = { {"each"}, {"cut"}, {"but"}, {"do"}, {"and"} };
  char * temp;
  char * abc[ROWS];
  int x;
  int c, r;

  for (x = 0; x < ROWS; x++)
    abc[x] = alpha[x];

  int top, seek;
  for (top = 0; top < ROWS - 1; top++)
    for (seek = top + 1; seek < ROWS; seek++)
      if(strcmp(abc[top], abc[seek]) > 0)
      {
         temp = abc[top];
         abc[top] = abc[seek];
         abc[seek] = temp;
      }
      for(c = 0; c < ROWS; c++)
        puts(abc[c]);

return 0;

}
