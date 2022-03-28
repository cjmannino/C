/* stringIn.c -- EX.8 PG.509 */
#include <stdio.h>
#define MAX 50

void flush(char * sptr);
char * getSource(char *, char *, int n);
void display(char *);

int main(int argc, char const *argv[])
{
  char source[MAX];
  char compare[MAX];

  printf("Please enter a string: ");
  fgets(source, MAX, stdin);



  return 0;
}




void flush(char *sptr)
{
    while (getchar() != '\n')
       continue;
  }

// think about above !!
