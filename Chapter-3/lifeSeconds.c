/* lifeSeconds.c -- converts your age into seconds */
#include <stdio.h>

int main(int argc, char const *argv[])
{

  signed int age;
  long unsigned displaySeconds;

  printf("Please enter how old your are:\n");
  scanf("%u", &age);
  displaySeconds = age*365*24*60*60;
  printf("Your age in seconds is: %lu", displaySeconds);


  return 0;
}
