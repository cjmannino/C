/* Function to calculate the nth triangular number */
#include <stdio.h>

void calculateTriangularNumber (int n)
{
    int i, triNumber = 0;

    for ( i = 1; i <= n; ++i )
    {
      printf("triangular: %i\n", i);
      triNumber += i;

    }

      printf("triangular number: %i is %i\n", n, triNumber);
}

   int main(int argc, char const *argv[])
{
    calculateTriangularNumber (10);
    calculateTriangularNumber (20);
    calculateTriangularNumber (50);

  return 0;
}
