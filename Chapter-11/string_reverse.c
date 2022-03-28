/* string_reverse.c EX. 9 PG. 509*/
#include <stdio.h>
#include <string.h>
#define MAX 50

void get_string(char * ustring, int n);
void string_reverse(char * ustring, int n);
void flush(char *strSource, int n);


int main(int argc, char const *argv[])
{
    char user_string[MAX];

    printf("Please enter a string: ");
    get_string(user_string, MAX);
    flush(user_string, MAX);
    while (user_string[0] != '\n')
    {
        string_reverse(user_string, MAX);
        printf("Please enter a string: (empty line to quit) ");
        get_string(user_string, MAX);

    }
    return 0;
}

void get_string(char * ustring, int n)
{
    fgets(ustring, n, stdin);
}

void string_reverse(char *ustring, int n)
{
    int x;
    for (x = strlen(ustring); x < strlen(ustring) + 1; --x)
        printf("%c", ustring[x]);
    puts("");
}


void flush(char *strSource, int n)
{
  int x;
  x = strlen(strSource);

  while(strSource[0] == '\n')
  {
    if(strSource[x+1] == '\n')
      strSource[x+1] = '\0';

  }

}// end of flush





