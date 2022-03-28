/*harmonic.c -- find the harmonic mean(average) */
#include <stdio.h>

double harmonic(double x, double y);

int main(void)
{
  double x = 123.21, y = 561.23, ret_value;


    printf("Find the harmonic value of two double numbers\n");

    ret_value = harmonic(x,y);
    printf("Harmonic Average: %.2f\n", ret_value);

    return 0;
}

double harmonic(double x, double y)
{
    double temp;
    temp = 2*x*y/(x+y);

    return temp;
}
