/* charSearchString.c -- ex.5 PG.509 */
#include <stdio.h>
#include <string.h>
#define MAX 40

char * s_gets(char * st, int n);
char * s_strings(char * sptr , const char test);

int main(int argc, char const *argv[])
{
  char userFetch[MAX];
  const char test = 'h';
  char *sptr;
  char *retVal;
  sptr = userFetch;

  puts("Please enter a string: ");
  s_gets(sptr, MAX);
  retVal = s_strings(sptr, test);
  printf("Address: %p  Dereferenced: %c\n", &retVal, *retVal);





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
char * s_strings(char * sptr , const char test)
{
  int x = 0;
  char * retVal;
  for (x = 0; x < strlen(sptr); x++)
  {
    if(sptr[x] == test)
        return &sptr[x];
     else
        retVal = NULL;
  }
  //return retVal;
  return &sptr[x];

} // end of s_strings
