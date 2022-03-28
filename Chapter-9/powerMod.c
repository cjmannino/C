/*powerMod.c-- raises numbers to double values including negatives */
#include <stdio.h>

double power(double n, double double_expnt);

int main(void)
{

  double n, double_expnt, final_double;

  printf("Please enter a double value: ");
  scanf("%lf", &n);
  printf("Please enter the amount you wish to raise(exponent) in double:  ");
  scanf("%lf", &double_expnt);
  final_double = power(n, double_expnt);
  printf("Result: %.2lf\n", final_double);

  return 0;
}

double power(double n, double double_expnt)
{
  double dtemp;
  if (n == 0 || double_expnt == 0)
  {
    printf("0 to the power is 0 is undefined in math\n");
    printf("using 0 to the first power\n");
    n = 0; double_expnt = 1;
  }
  dtemp = n * double_expnt;

  return dtemp;
}
