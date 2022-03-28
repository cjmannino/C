/* iehomany.c -- keep track of how many ie occur in user characters */
#include <stdio.h>
#define MAXCHARARRAY 40

int main(int argc, char const *argv[])
{
  char ch;
  char test = 'ei';
  char charhold[MAXCHARARRAY];
  signed int index = 0, loop, ecount = 0, icount = 0;

  printf("Please enter sentences (# to quit)\n");
  while ((ch = getchar()) != '#')
  {
    index = 0;
    charhold[index] = ch;
    index++;

    for (loop = 0; loop <= index; loop++)
    {
      if (charhold[loop] == test)
          ecount++;
    }
  }
    printf("\n");
    printf("The expression has found %i ei combinations \n", ecount);


  return 0;
}
