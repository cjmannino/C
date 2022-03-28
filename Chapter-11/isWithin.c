/* isWithin.c -- Exercise 6 PG. 509 */
#include <stdio.h>
#include <strings.h>
#include <stdbool.h>
#define MAX 50

char * s_gets(char * st, int n);
int isWithin(char * sptrU, char test, int n);

int main(int argc, char const *argv[])
{
    char userFetch[MAX];
    char test = 'a';
    char * sptrU;
    sptrU = userFetch;
    int x = 0;

    puts("Enter a sentence: ");
    s_gets(sptrU, MAX);
    x = isWithin(sptrU, test, MAX);
    printf("%d\n", x);


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
int isWithin(char * sptrU, char test, int n)
{
  int x = 0;
  bool compare = true;
  while(x < strlen(sptrU))
  {
    x++;
    if(sptrU[x] == test)
       return compare = true;
  }
  return compare = false;
}
