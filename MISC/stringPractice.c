/*stringPractice.c-- a way for me to practice strings */
#include <stdio.h>
#include <string.h>
#define MAXSIZE 50

int main(void)
{
  char str1[MAXSIZE] = "welcome to the machine.";
  char str2[MAXSIZE] = "Hello my son, ";
  char * vd1 = "Apple";
  char * vd2 = "Apple";

  puts("String Length (strlen)");
  fputs(str1, stdout);
  printf("\tSize of str1: %lu \n", strlen(str1) );
  fputs(str2, stdout);
  printf("\tSize of str2: %lu \n", strlen(str2) );

  puts("\nCombine the two strings (strncat)");
  strncat(str2, str1, MAXSIZE);
  printf("%lu combine string size\n", strlen(str2) );
  puts(str2);

 if(strcmp(vd2, vd1))
  puts("False");
else
  puts("True");

  return 0;
}
