/* praise1.c -- uses an assortment of strings */
#include <stdio.h>
#define PRAISE "You are an extraodinary being."

int main(int argc, char const *argv[])
{

  char name [40];

  printf("What is your name? ");
  scanf("%s", name);
  printf("Hello, %s. %s\n", name, PRAISE);

  return 0;
}
