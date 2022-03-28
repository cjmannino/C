/* EX.8.c PG.509*/
#include <stdio.h>
#define MAX 50


char * s_gets(char * st, int n);
char * stringIn (char * sptrS , char * sptrC, int n);

int main(void)
{
    char source[MAX];
    char compare[MAX];
    char * retVal;

    printf("Please enter a string: ");
    s_gets(source, MAX);
    printf("Please enter a comparsion string: ");
    s_gets(compare, MAX);
    retVal = stringIn(source, compare, MAX);
    if(retVal == NULL)
      printf("Sorry no match!\n");
    else
      printf("Match %s was found at %p\n", retVal, &retVal);

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

char * stringIn (char * sptrS , char * sptrC, int n)
{
  int x = 0;
  while(*sptrS != '\0')
  {
    while(*(sptrS+x) == *(sptrC+x))
    {
      x++;
      if(*(sptrC+x) == '\0')
        return sptrC;
    }
    sptrS++;
  }
    return NULL;

}
