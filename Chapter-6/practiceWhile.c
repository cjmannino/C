/* practiceWhile.c -- a practice of while loop */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    //int test = 0;
    int test = 10;
    //while (test++ < 5)
    while (test-- > 1)
    {
      printf("%d\n", test);
    }
    printf("Done\n");

    int loop;

    loop = (5 < 2);
    printf("%d\n", loop);

  return 0;
}
