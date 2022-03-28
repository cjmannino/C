/* dowhileitmatters.c -- do..while loop */

#include <stdio.h>
#define SECRET 20

int main(int argc, char const *argv[])
{
   int loop;
   int guess;

   printf("Please guess a number (1-20)\n");

   do
   {

     scanf("%i", &guess);

   }while (guess != SECRET);


  return 0;
}
