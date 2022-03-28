/*copySpecificArray.c -- exercise 8 pg.440*/
#include <stdio.h>
#define MAX 7
#define TARMAX 3

void copySpecificArray(int source[MAX], int target[MAX]);

int main(int argc, char const *argv[])
 {
   int source[MAX] = { 100, 345, 234, 194, 221, 467, 679};
   int target[MAX];

   copySpecificArray(source, target);

  return 0;
}

void copySpecificArray(int source[MAX], int target[TARMAX])
{
    int x, c = 0;

      for (x = 3, c = 0; x < MAX - 1; x++, c++)
      {
              target[c] = source[x];
              printf("Target:%d\n", target[c]);
      }

}
