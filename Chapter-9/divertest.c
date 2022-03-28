/* drivertest.c -- driver test for a function*/
#include <stdio.h>

double min (double x, double y);

int main(void)
{
    double ret_value;
    double x = 123.45, y = 987.12;

    ret_value = min(x,y);

    printf("%.2lf\n", ret_value);

    return 0;
}

double min(double x, double y)
{
  double temp;

  temp = x;
  if(x < y)
    return temp;
  else
    return y;


}
