/* mynestfor.c -- an experiment to learn nested for loops */
#include <stdio.h>
#define ROWS 6

int main(int argc, char const *argv[])
{
   int a, b;

   for ( a = 1; a < ROWS; a++)
   {
       for (b = 1; b < a; ++b)
       printf ("$");
       puts ("");
     }
  return 0;
}



/*
for ( a = 1; a < 7; a++)
{
  for (b = 1; b < a; ++b)
    printf ("$");
    puts ("");
}
*/
