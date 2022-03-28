/*  waterMolec.c -- calculates amount of molecules in water given amount*/
#include <stdio.h>

int main(int argc, char const *argv[])
{

  float waterMolec = 3.0E-23;
  int grams = 950;
  int quarts;
  float finalConvert;
  printf("Please enter how many quarts of water:");
  scanf("%d", &quarts);

  finalConvert = ((quarts * grams) / waterMolec);
  printf("The number of water molecules is  %e.\n",finalConvert);

  return 0;
}
