/* mystrncpy.c -- EX.7 PG. 508 */
#include <stdio.h>
#define MAX 50

void mystrncpy (char * stptrS, char * stptrD, int n);

int main(int argc, char const *argv[])
{
  char source[MAX];
  char destin[MAX];
  char * stptrS;
  char * stptrD;
  stptrS = source;
  stptrD = destin;

  printf("Please enter a string: \n");
  fgets(source, MAX, stdin);
  if(source[0] == '\n')
      while (getchar() != '\n')
         continue;
  mystrncpy(source, destin, MAX);

  return 0;
}
 void mystrncpy(char *stptrS, char *stptrD, int n)
 {
   int numb = 0;
   int x;
   printf("\nThe string your entered:\n");
   printf("%s\n", stptrS);
   puts("Please enter the amount of characters you want to copy");
   scanf("%d", &numb);

   for(x = 0; x < numb + 1; x++)
   {
     stptrD[x] = stptrS[x];
     printf("%c", stptrD[x]);
   }
    puts("");
 }
