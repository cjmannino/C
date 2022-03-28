/* sizeof.c -- uses sizeof operator */
#include <stdio.h>

int main (void)
{
  int n = 0;
  int what = 123;

  float a = 123.45;
  char c = 'A';
  size_t intsize;
  size_t zwhat;

  intsize = sizeof (int);
  zwhat = sizeof (int);
  printf("n = %d, n has %zd bytes; all int have %zd bytes.\n",
        n, sizeof n, intsize);


    printf("Float: %3.2F and size is %zd\n", a, sizeof(a));
    printf("Char c is %c and the size is %zd\n", c, sizeof(c));
    printf("Int what= %d and the size is: %zd\n", what, zwhat);

  return 0;

}
