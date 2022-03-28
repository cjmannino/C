/*double_large.c -- find and switch the larger of two doubles. */
#include <stdio.h>

void larger(double x, double y);

int main(void)
{
    double x = 432.12, y = 675.12;

    printf("Value before func x: %.2f & y: %.2f\n", x, y);
    larger(x,y);

    return 0;
}

void larger(double x, double y)
{
    double temp;

    if(x > y)
    {
        y = x;
    }
    else
    {
      x = y;
    }
    printf("Value x %.2f, value y %.2f\n", y, x);
}
