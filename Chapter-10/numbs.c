/*numbs.c -- a practice with arrays and pointer */
#include <stdio.h>
#define SIZE 4
#define DEPTH 5

int main(int argc, char const *argv[])
{
    float total, average;
    int x,y;

    float numbs[SIZE][DEPTH] = { {89.23, 98.98, 92.45, 99.21, 98.89},
                                 {78.23, 89.45, 78.56, 89.34, 89.34},
                                 {45.56, 67.23, 72.12, 67.32, 45.23},
                                 {95.12, 99.34, 99.45, 98.12, 99.98} };

    printf("%.2f\n", *(*(numbs+2) + 1) );
    printf("%.2f\n", *(numbs+2) + 1);
    printf("%.2f\n", *(*(numbs+3) + 4) );

    printf("Using pointer to get address\n");
    printf("%p:numbs\n", &numbs);
    printf("%p:numbs[0]\n", *numbs);
    printf("%p:numbs[0][0]\n", &numbs[0][0] );
    printf("%p:numbs[0][0]\n", *(numbs) );

    printf("\nUsing array notation to get address\n");
    printf("%p:numbs\n", &numbs);
    printf("%p:numbs[0]\n", &numbs[0]);
    printf("%p:numbs[0][0]\n", &numbs[0][0]);
    puts("");

      for (x = 0; x <= 3; x++)
      {
          for (y = 0; y <= 4; y ++)
          printf("numbs[%d][%d] = %.2f | Address:%p\n", x, y, numbs[x][y],
                  &numbs[x][y]);
      }
    printf("\n");

      return 0;
}
