/* skiptwo.c -- skips over first integers of input */
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n;

  printf("Please enter three integers:\n");
  scanf("%*d %*d %d", &n);
  printf("The last integer was: %d\n", n);

  return 0;
}
