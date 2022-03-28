/* nameplease.c -- ask user for first and last name */
#include <stdio.h>

int main(int argc, char const *argv[])
{
   char first[20];
   char second[20];

   printf("Please enter your first name: ");
   scanf("%s", first);

   printf("Enter your last name: ");
   scanf("%s", second);

   printf("Hello %s %s\n", second, first);

  return 0;
}
