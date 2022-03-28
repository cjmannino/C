/* intarray.c */
#include <stdio.h>
#define INTMAX 10

int main(int argc, char const *argv[])
{
    int fullArray[INTMAX];
    int stepArray;
    int counter;

    for(counter = 0; counter < INTMAX; counter++)
    {
      fullArray[counter] = counter;

    }

      for (stepArray = 0; stepArray < INTMAX; stepArray++)
      {
        printf("%d\t", fullArray[stepArray]);

      }
      printf("\n");
  return 0;
}
