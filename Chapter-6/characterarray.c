/* characterarray.c -- full an array with the alphabet */
#include <stdio.h>
#define MAXARRAY 26

int main (void)
{

  char characterarray[27];
  char letter;
  int loop;

  for (letter = 'A'; letter - 'A' < MAXARRAY; letter++)
    characterarray[letter - 'A'] = letter;

  for (loop = 0; loop < MAXARRAY; loop++)
    printf("%c", characterarray[loop]);

  printf("\n");
  return 0;

}//end of main
