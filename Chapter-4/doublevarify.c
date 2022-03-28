/*doublevarify.c -- display doubles and varify */

#include <stdio.h>
#include <float.h>

int main(int argc, char const *argv[])
{
  double dfirst;
  float fsecond;

  dfirst = (1.0/3.0);
  fsecond = (1.0/3.0);
  puts("**********************DOUBLE***************************");
  printf("double four digit right of decimal: %.4F\n",dfirst);
  printf("double twelve digit right of decimal: %.12F\n",dfirst);
  printf("double sixteen digit right of decimal: %.16F\n",dfirst);
  puts("**********************FLOAT*****************************");
  printf("double four digit right of decimal: %.4F\n",fsecond);
  printf("double twelve digit right of decimal: %.12F\n",fsecond);
  printf("double sixteen digit right of decimal: %.16F\n",fsecond);

  printf("Double precision = %d digits\n", DBL_DIG);
  printf("Float precision = %d digits\n", FLT_DIG);

  return 0;
}
