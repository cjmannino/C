/* myfor.c -- an experiment to learn about for statements. */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int initialize, secondIntialize;


    for (initialize = 2, secondIntialize = 3; initialize < 10; initialize += 2,
        secondIntialize += 3)
    {
      printf("* %d initialize\n", initialize);
      printf("\t%% %d secondIntialize\n", secondIntialize);
      
    }

  return 0;
}
