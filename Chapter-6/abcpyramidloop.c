/* abcpyramidloop.c */
#include <stdio.h>
#define ASCIIMAX 117
#define LOOPMAX 7
#define STEP 2

int main(int argc, char const *argv[])
{
  int character;
  int i,b;
  char ch = 'A';

  for (i = 1; i < LOOPMAX; i++)
  {
    for (character = 1; character <= i; character++)
        printf("%c", ch++);
    printf("\n");
  }


  return 0;
}
