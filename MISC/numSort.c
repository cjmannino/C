/* numSort.c -- practice sorting an integer array */
#include <stdio.h>
#define MAX 10

int main(void)
{

    int mixnum[MAX] = {1,4,6,2,8,1,5,0,3,9};
    int x, c, r, y;
    int temp;
    int * swap;

    for (y = 0; y < MAX; y++)
        swap[y] = mixnum[y];

    for (r = 0; r < MAX -1; r++)
    {
      for (c = r +1; c < MAX; c++)
      {
          if(swap[r] > swap[c])
          {
              temp = swap[r];
              swap[r] = swap[c];
              swap[c] = temp;
          }
       }
    }

    for (x = 0; x < MAX; x++)
      printf("%d\n", mixnum[x]);
      
    return 0;
}
// assign pointers to array elements.
// Use selection sort algorithm to compare first element (using pointers)
// to the second element, swap them if second is higher/lower continue
// through the array.
