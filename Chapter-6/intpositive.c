/* intpositive.c -- using scanf and while loop together */
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int userFirst, userTotal;

  printf("Please enter an integer to square: ");

  while (scanf("%i", &userFirst) == 1)
  {
    userTotal = userFirst * 2;
    printf("Total:%i\n", userTotal);
    printf("Enter another integer or q to quit!");
  }
  return 0;
}
