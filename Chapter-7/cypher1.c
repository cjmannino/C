/* cypher1.c -- alters input, preserving spaces */
#include <stdio.h>
#define SPACE ' '

int main(void)
{
  char ch;

  ch = getchar();
  while (ch != '\n')
  //while ((ch = getchar()) != '\n')
  {
    if (ch == SPACE)
        putchar(ch);
    else
        putchar(ch + 1);
    ch = getchar();
  }
  putchar(ch);

  return 0;
}
/* can use while((ch = getchar()) != '\n') */
