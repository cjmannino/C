/* guess.c -- an inefficent and faulty number-guesser */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int guess = 1;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my quess is right and with ");
    printf("\nan n if it is wrong.\n");
    printf("uh..is your number %i?\n", guess);
    while (getchar()!= 'y')
        printf("Well, then, it is %i?\n", ++guess);
    while (getchar() != '\n')
          continue;

    printf("I knew I could do it!\n");


  return 0;
}
