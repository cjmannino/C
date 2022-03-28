/* Function to find the greatest common divisor */

#include <stdio.h>

void gcd (int u, int v);

int main (void)
{
  gcd (150, 35);
  gcd (1026, 405);
  gcd (83, 240);

  return 0;
}

void gcd (int u, int v)
{
  int temp;

  printf("The GCD of %i and %i is ", u, v);

  while ( v != 0)
  {
    temp = u % v;
    printf("\t V: %i  \t\t U: %i \n", u,v);
    u = v;
    v = temp;
  }
  printf("%i\n", u);
}
