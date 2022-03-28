/* whileitmatters.c -- */
#include <stdio.h>
#define MAX 20


int main(int argc, char const *argv[])
{
    int loop = 2;


    while (loop <= MAX)
    {
      printf("%i\n", loop);
      loop = loop + 2;
    }
  return 0;
}
