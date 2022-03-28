/*io.c -- a simple program to use getchar()*/
#include <stdio.h>

char get_first(void);

int main(int argc, char const *argv[])
{

  int ch;

  printf("Please choose a menu item:\n");
  printf("a) vote       b) scream\n");
  printf("c) reset      q) quit\n");

  ch = get_first();
  printf("%c\n", ch);
  
  return 0;
}
char get_first(void)
{
    int ch;
    ch = getchar();
    while (getchar() != '\n')
        continue;

    return ch;

}
