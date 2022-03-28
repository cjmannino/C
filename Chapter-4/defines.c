/* defines.c -- uses defined constants from limit.h and float.h */
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main (void)
{
  float a = 121223.22E-12;

  printf("Some number limits for this system:\n");
  printf("Biggest int: %d\n", INT_MAX);
  printf("Smallest long long: %lld\n", LLONG_MIN);
  printf("One byte = %d bits on this system.\n", CHAR_BIT);
  printf("Largest double: %e\n", DBL_MAX);
  printf("Smallest normal float: %e\n", FLT_MIN);
  printf("float precision = %d digits\n", FLT_DIG);
  printf("float epsilon = %e\n", FLT_EPSILON);

  printf("The size of A: %lu \n", sizeof(a));
  return 0;
}
