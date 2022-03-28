/* nestfor1loop.c -- printf casading $ */
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int loopouter, loopinner;
  char display = '$';

  for (loopouter = 1; loopouter <= 5; loopouter++)
  {

    for (loopinner = 1; loopinner < 6; loopinner++)
      printf("%c", display);

  }
  printf("\n");

  return 0;
}
