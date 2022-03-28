/* userFetch.c -- EX.1 508*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 50

char * s_gets(char * st, int n);
void inspUserInpt(char * sptrU, int n);

int main(int argc, char const *argv[])
{
    char userInput[MAX];
    char * sptrU;
    sptrU = userInput;

    puts("Please enter a sentence.");
    s_gets(sptrU, MAX);
    inspUserInpt(sptrU, MAX);

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
void inspUserInpt(char * sptrU, int n)
{
  int punct = 0, capt = 0, spc = 0;
  int x;

    for (x = 0; x < n; x++)
    {
        punct+= (ispunct(*(sptrU + x) ) );
        capt+=  (isupper(*(sptrU + x) ) );
        spc +=  (isspace(*(sptrU + x) ) );
    }

printf("------------------------------------------------\n");
printf("Punctuations: %d Captials: %d Spaces: %d Length %lu\n", punct,capt,
    spc, strlen(sptrU));
}
