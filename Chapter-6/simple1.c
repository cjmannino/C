/* simple.c */
#include <stdio.h>

int main(int argc, char const *argv[])
{
   int col, row;

   for (row = 1; row <= 4; row++)
   {
     for (col = 1; col < 8; col++)
     printf("$");
     printf("\n");
   }

  return 0;
}
