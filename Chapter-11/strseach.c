/* strseach.c -- ex.5 CH.11 */
#include <stdio.h>
#include <string.h>
#define MAX 50

char * testString(char * userFetch, char ch);
int main(int argc, char const *argv[])
{

  char userFetch[MAX];
  char ch;
  char * retVal;


  printf("Please enter a string: (empty line to quit) ");
  fgets(userFetch, MAX, stdin);
  while(userFetch[0]!= '\n')
  {
    printf("Enter a search character: ");
    ch = getchar();
    if(ch != '\n')
      while (getchar() != '\n')
        continue;
    retVal = testString(userFetch, ch);
    if(retVal == NULL)
      printf("No matches in string");
    else
      printf("%c was found in string: %s\n",ch, userFetch );

      printf("Please enter a string: (empty line to quit) ");
      fgets(userFetch, MAX, stdin);
  }
  printf("BYE!\n");

  return 0;

}

char * testString(char * userFetch, char ch)
{
  if(userFetch[0] == ch)
    return &userFetch[0];
  else
    return NULL;
}
