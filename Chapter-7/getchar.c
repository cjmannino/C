/* getchar.c -- practice */
#include <stdio.h>
#define CHARMAX 30

int main(int argc, char const *argv[]) {
  char character[CHARMAX];
  unsigned int i;

  while (scanf("%c", &character) != '#')
  {
    for ( i = 0; i < 8; i++)
        printf(" %c : %3i ",ch, ch);
  }
  printf("\n");


  return 0;
}
