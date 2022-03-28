/* floatdisplay.c -- readsin float numbers prints in decimal and
floatng point notion */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  float userFloat1;
  float userFloat2;

  printf("Please enter a floating point number:");
  scanf("%f", &userFloat1);

  printf("----------------------------------------\n");
  printf("First Float first decimal: %0.2F\n", userFloat1);
  printf("First Float in exponential notion: %0.1E\n", userFloat1);

  return 0;
}
