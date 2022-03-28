/*arrayLarge.c -- get the largest value form int array */
#include <stdio.h>
#define MAX 5

void displayArray (const int (* ar), int rows);
void getLargeSmallArrayElement (const int (* ar), int rows);
void getAverage (const int (* ar), int rows);


int main(int argc, char const *argv[])
{
  int source[MAX] = {100,105,210,107,99};
  int highValue;

  displayArray(source, MAX);
  getLargeSmallArrayElement(source, MAX);
  getAverage(source, MAX);

  return 0;
}

void displayArray (const int (* ar), int rows)
{
  printf("Array: ");
  int x;
  for (x = 0; x < MAX; x++)
    printf(" %2d", ar[x]);
}

void getLargeSmallArrayElement (const int (*ar), int rows)
{
    int high, low;
    int x;
    low = high = ar[0];

    for ( x = 0; x < MAX; x++)
      {
          if(low > ar[x])
             low = ar[x];

          if (high < ar[x])
              high = ar[x];
      }
   printf(" \nHigh: %d Low: %d ", high, low);

}//end of routine

void getAverage (const int (* ar), int rows)
{
  int average = 0;
  int x;

  for (x = 0; x < MAX; x++)
    {
      average += ar[x];
    }

    printf("Average: %d\n", average / rows);

}//end of routine
// practice questions (arrays) 2-6 pg.443
