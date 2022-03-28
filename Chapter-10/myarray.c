/*myarray.c -- practice with arrays */
#include <stdio.h>

#define ROW 2
#define COLUMN 5

int main(void)
{
  int x, z;
  float total;


    const float numbers[ROW][COLUMN] =
    {
        {2.4, 4.1, 9.8, 7.4, 4.2},
        {4.5, 6.2, 7.8, 9.1, 8.7}
    };

    for(x = 0; x < ROW; x++)
    {
      for (z = 0; z < COLUMN; z++)
      printf("ARRAY[%i][%i]={%.2f}\n", x,z,numbers[x][z]);
    }
    total = numbers[0][1] + numbers[1][3];
    printf("The total is: %.2f\n", total);




  return 0;
}
