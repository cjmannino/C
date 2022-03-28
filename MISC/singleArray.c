/*singleArray.c -- single array and pointer practice. */
#include <stdio.h>
#define MAX 4

int main (void)
{
    int numbs[MAX] = {3,7,9,2};

    int x;
    for(x = 0; x < MAX; x++)
    {
      printf("Numbs[%x]= %d at %p\n", x, numbs[x], &numbs[x]);
    }

    printf("Value at numbs[1] %d\n", *(numbs+1) );
    printf("Value at numbs[3] %d\n", *(numbs+3) );
}
