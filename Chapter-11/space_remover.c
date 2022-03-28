/* space_remover.c -- EX 10 PG.509 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
#define SPACE ' '


void flush(char * str);
void space_remove(char *userString);

int main(void)
{
    char uString[MAX];

    puts("Please enter a string: ");
    fgets(uString, MAX, stdin);
    flush(uString);
    space_remove(uString);
    while(uString[0] != '\n')
   {
        puts(uString);
        puts("Enter another string (empty line to exit)");
        fgets(uString, MAX, stdin);
   }

    return 0;
}

void space_remove(char *userString)
{
    int x, y = 0;
    for (x = 0; x < strlen(userString); x++)
    {
       if(userString[x] == SPACE)
           userString[x] = userString[x-1];
    }

}

void flush(char * str)
{
  int x;
  x = strlen(str);

  while(str[0] == '\n')
  {
    if(str[x] == '\n')
      str[x] = '\0';
  }

}// end of flush

