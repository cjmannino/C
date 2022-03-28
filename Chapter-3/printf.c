/* printf.c practive with printf specifers */
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int abuse = 231;
  float hurtme = 31.5F;

  puts("");
  printf("Integer abuse in decimal: %d\n", abuse);
  printf("Integer in Octal form: %#o\n", abuse);
  printf("Integer in Hexadecimal form: %#X\n", abuse);

  puts("");
  printf("The float hurtme is: %.1f\n", hurtme);
  printf("Float in expontent form: %E\n", hurtme);
  printf("Float with printf deciding: %g\n", hurtme);


  return 0;
}
