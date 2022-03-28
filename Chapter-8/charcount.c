/* charcount.c a program that counts character regardless of input */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int count = 0;

    while (getchar() != EOF)
    count++;

printf("%i Characters: \n", count);

  return 0;
}
