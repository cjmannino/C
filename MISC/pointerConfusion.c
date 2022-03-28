/*pointerConfusion.c -- another attempt to learn pointers */
#include <stdio.h>
#define ROWS 3
#define COLS 4


int main(int argc, char const *argv[])
{

    int oneArray[4] = {100, 99, 78, 92};
    int multiArray[ROWS][COLS] = { {10, 23, 19, 20 },
                                   {16, 19, 25, 15 },
                                   {10, 18, 17, 16} };

    int * ptr = oneArray;
    int (* mptr)[4];
    mptr = multiArray;
/*
    //one dimensional array
    printf("Using &ptr address of oneArray:     %p\n", ptr);
    printf("Using array name address is         %p\n", &oneArray);
    printf("Last element using *ptr:            %d\n", *(ptr + 3) );
    printf("Last eleme using array name:        %d\n", oneArray[3]);
*/
    //multi-dimensional
    //printf("Using Pointer Notation Multi-dimensional\n\n");
    int r, c;
    for (r = 0; r < ROWS; r++)
    {
          for (c = 0; c < COLS; c++)
          {
              printf("Address: %p", &multiArray[r][c]);
              printf("          Values: %d\n", multiArray[r][c]);
          }
    }



  return 0;
}
