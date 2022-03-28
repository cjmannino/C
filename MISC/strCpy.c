/*strCpy.c -- use strcpy and strncmp to assign to an array. PG.483*/
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define LIM 5

int main(void)
{
  char des[LIM][SIZE];
  char temp[SIZE];
  int x = 0;

  puts("Enter words that start with b");
  while(scanf("%s", temp) != 'q' && x < LIM)
    strncpy(des[x], temp, SIZE);
  x++;

  return 0;
}
