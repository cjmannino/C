/*sevenArray.c -- copy specific elements from source to tageted arraay*/*
/*program exercise 8 pg.440*/
#include <stdio.h>
#define MAX1 7
#define MAX2 3

void copyArray (int source[MAX1], int target[MAX2]);

int main(int argc, char const *argv[])
{
    int source[MAX1] = {100,123,345,678,987,456,836};
    int target[MAX2];


  return 0;
}

void copyArray (int source[MAX1], int target[MAX2]
  {
    int x,c;
    for (x = 3; x < MAX1; x++)
    {
        for (c = 0; c < MAX2; c++)
          {
              target[c] = source[x];
              printf("target%d = %d\n", x, target[c]);
          }
      }

  }// end of routine
