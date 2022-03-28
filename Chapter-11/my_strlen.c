/* my_strlen.c -- a function to learn pointers and strength length EX.10 PG.508*/
#include <stdio.h>
#include <string.h>

int my_strlen(char *, int);

int main(int argc, char const *argv[])
{
   char * name = "Abraham Lincoln";
   int length = 0;
   int x;
   x = my_strlen(name, length);
   printf("%d\n", x);
   printf("%lu TRUE\n", strlen(name));


  return 0;
}
int my_strlen(char * name, int length)
{
  while(*name++)
   length++;

   return length;
}
