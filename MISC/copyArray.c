/* copyArray.c -- using strncpy and strncmp PG.482*/
#include <stdio.h>
#include <string.h>
#define ROWS 5
#define LENGTH 10

int main(void)
{
  char temp[ROWS][LENGTH];
  char dest[ROWS][LENGTH];
  int r,c,x;

  for(r = 0, x = 0; r <= ROWS && x <= LENGTH; r++, x++)
    fgets(&temp[r][c], LENGTH, stdin);

  for(r = 0; r <= ROWS; r++)
    strncpy(dest[r], temp[r], LENGTH -1);

for(r = 0; r <= ROWS; r++)
  fputs(dest[r], stdout);



  return 0;
}
