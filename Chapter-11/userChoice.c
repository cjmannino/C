/* userChoice.c -- users answers recognizes upper or lower case letters */
/*exercise 13 PG.508 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 10
#define LOWCASE 'l'
#define UPCASE 'L'

char * s_gets(char * st, int n);
void qualUserInput (const char * sptrL, char * sptrU);

int main(void)
{
  const char answer[MAX] = "Lincoln";
  char useInpt[MAX];
  const char * sptrL;
  char * sptrU;
  sptrL = answer;
  sptrU = useInpt;

  puts("Please enter last name of 16th President of the United States");
  s_gets(useInpt, MAX);
  qualUserInput(answer, useInpt);

return 0;

}
char * s_gets(char * st, int n)
{
   char * ret_val;
   int i = 0;

   ret_val = fgets(st, n, stdin);
   if (ret_val)
   {
      while (st[i] != '\n' && st[i] != '\0')
          i++;
      if (st[i] == '\n')
          st[i] = '\0';
      else // must have words[i] == '\0'
        while (getchar() != '\n')
           continue;
    }
return ret_val;
 }

void qualUserInput (const char * sptrL, char * sptrU)
{
  if(*sptrU == LOWCASE)
    *sptrU = UPCASE;
  if(strcmp(sptrL, sptrU) == 0)
    puts("Right!");
  else
    puts("Wrong");
}
