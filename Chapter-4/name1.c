/* name2.c -- gets user name prints it in different formats */
#include <stdio.h>

int main(int argc, char const *argv[])
{
  char firstName[30];

  printf("Welcome to a nothing data base\n");
  printf("Please enter your first name: ");
  scanf("%s",firstName);

  printf("\"%s\"\n", firstName);
  printf("\"%20s\"\n", firstName);
  printf("\"%-20s\"\n", firstName);
  printf("\"%s   \"\n", firstName);
  return 0;
}
