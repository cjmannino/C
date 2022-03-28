/* while1.c */
#include <stdio.h>
#include <stdbool.h>

void trial (void);

int main (void)
{
    unsigned int x = 3;

    while (x)
      printf("%i\n", x--);

    printf("DONE!\n");

    trial();

  return 0;
}

void trial (void)
{
  int i = -3;
  do {
    printf("%i\n", i++);

  } while(i);

  int b;
  bool test;
  printf("Enter a number (1 <-> 3)\n");
  test = scanf("%i", &b) == 1;

  while (test)
{

  switch (b)
  {
    case (1) : printf("%i\n", b + 2);
               break;

   case (2)  : printf("%i\n", b - 1);
               break;

   case (3)  : printf("%i\n", b + 4);
               break;

    default : printf("Please enter a number 1 - 3\n");
              break;

  } // switch
  printf("Enter another choice q to quit\n");
  test = scanf("%i", &b) == 1;
} // end of while
printf("BYE!\n");

}// main
