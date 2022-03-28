/* backwardsintarray.c -- */
#include <stdio.h>
#define MAX 8

int main(int argc, char const *argv[])
{
    int full[MAX];
    int a = 0, b, c;

  for ( b = 0; b <=MAX; b++)
  {
    printf("%i> ",b);
    while (scanf("%i", &full[b]) ==8);
  }
  printf("\n\n");
  
  for (a = 8; a >=0; a--)
       printf("%i> %i\n", a, full[a]);

  return 0;
}
//for (int i = strlen(inputArray); i >= 0; i--)
