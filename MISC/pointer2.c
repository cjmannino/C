/* pointer.c -- use two dimensional array */
#include <stdio.h>
#define ROWS 3
#define COLS 3

void messWithArray (int (*ar)[COLS], int n);
int main(int argc, char const *argv[])
{
  int numbs[ROWS][COLS] = { {100, 99, 88}, {95, 98, 87}, {89, 78,100} };
  

  printf("Address of numbs        %p\n", &numbs);
  printf("Addres of numbs[0]      %p\n", &numbs[0]);
  printf("Address of numbs[0][0]  %p\n", &numbs[0][0]);

  printf("Value at numbs          %d\n", *(*numbs));
  printf("Value at numbs[0][2]    %d\n", *(*numbs+4));

  messWithArray(numbs, ROWS);
  return 0;
}

void messWithArray(int (*ar)[COLS], int n)
{
  int x,c;
  for (x = 0; x < n; x++)
    for (c = 0; c < n; c++)
    printf("%d\t", *(*(ar+x) + c) );
    puts("");
}
