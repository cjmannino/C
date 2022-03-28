// input.c -- when to use &
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int age;
  float assets;
  char pet[30];

  printf("Enter your age, assests, and favorite pet.\n");
  scanf("%d %f", &age, &assets);
  scanf("%s",pet);
  printf("%d $%.2f %s\n", age, assets, pet);

  return 0;
}
