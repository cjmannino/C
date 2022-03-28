/* backwardarray.c */
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char inputArray[30];
  char count;
  printf("Please enter a single word: ");
  scanf("%s",inputArray);


  for (int i = strlen(inputArray); i >= 0; i--)
      printf("%c", inputArray[i]);
      printf("\n");

  //printf("\tThe size is: %zd\n", strlen(inputArray));

  return 0;
}
