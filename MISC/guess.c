/* guess.c -- practice with getting rid of newline */
#include <stdio.h>
#define GUESS 5

int main(int argc, char const *argv[])
{
    int x = 0;
    char guess[10];

      while( x < 5)
      {
      puts("Please enter a name[1 - 10]?");
      scanf("%s", guess);
      x++;
      printf("%s", guess);
      //while(getchar() != '\n')
      //  continue;
}

  return 0;
}
