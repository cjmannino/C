/*sprintf.c -- use sprintf to write to arrays*/
#include <stdio.h>
#define MAXSIZE 20

int main (void)
{
  char first[MAXSIZE];
  char second[MAXSIZE];
  char ufir[MAXSIZE];
  char usec[MAXSIZE];


  puts("Your first name pLease: ");
  fgets(ufir, MAXSIZE, stdin);
  fgets(usec, MAXSIZE, stdin);

  sprintf(first, "%s", ufir);
  sprintf(second, "%s", usec);

  fputs(first, stdout);
  fputs(second, stdout);

  return 0;

}
