/* downloadspeed.c -- pretend download speed */
#include <stdio.h>
#define BITS 8

int main(int argc, char const *argv[])
{
  float megabits;
  float fileSize;
  float downSpeed;

  printf("Please enter requested speed in(megabits) per second:");
  scanf("%f", &megabits);
  printf("\nPlease enter the size of file also in(megabits)");
  scanf("%f", &fileSize);

  printf("------------------------------------------------");
  downSpeed = megabits / BITS;

  printf("\nYour choosen speed of: %1.2F and file size of %1.2F\n", megabits, fileSize);
  printf("will take: %0.2F seconds\n", downSpeed);

  return 0;
}
