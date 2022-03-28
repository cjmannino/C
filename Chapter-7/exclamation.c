/* exclamation.c -- swapping periods of ! */
#include <stdio.h>

int main(int argc, char const *argv[])
{
  char ch;
  signed int charCountOne = 0, charCountTwo = 0;

  printf("Please enter a sentences (use # to quit)\n");

  while ((ch = getchar()) != '#')
  {
        switch (ch)
        {
              case '.' : printf("!");
                         charCountOne++;
                         break;

              case '!' : printf("!");
                         charCountTwo++;
                         break;

              default  : break;
    }
    printf("%c", ch);
  }

  printf("\nPeriod substitions: %i and Exclamation %i\n",
        charCountOne, charCountTwo);

  return 0;
}
