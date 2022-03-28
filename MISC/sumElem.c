/*sumElem.c -- sums values in other two arrays to a third*/
/*exercise 10 pg.440*/
#include <stdio.h>
#define MAX 4

void arraySum (int source1[MAX], int source2[MAX], int target[MAX]);

int main (void)
{
  int source1[MAX] = {0,2,4,6};
  int source2[MAX] = {1,1,2,1};
  int target[MAX];

  arraySum(source1, source2, target);


  return 0;
}

void arraySum (int source1[MAX], int source2[MAX], int target[MAX])
{

    int x;
    for (x = 0; x < MAX; x++)
      {
        target[x] = source1[x] + source2[x];
        printf("Sum of source1[%i] + source2[%i]= %i\n", x, x, target[x]);
      }
}
