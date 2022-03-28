/* stringPractice.c -- with pointers and math */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 37
#define SPACE " "

void man_str (char * sptr1, char * sptr2);
int main(int argc, char const *argv[])
{
  char str1[MAX] = "You a punk ";
  char str2[MAX] = "Randolf Scott ";
  char * sptr1;
  char * sptr2;
  int x;

  sptr1 = str1;
  sptr2 = str2;

  man_str(str1, str2);
  //puts(sptr1);
  //puts(sptr2);

  //* sptr1 = tolower(*sptr1);
  //strncat(str1, str2, MAX);
  //puts(sptr1);
  //printf("%lu %lu\n", strlen(str1), strlen(str2) );

  /*
  for (x = 0; x < MAX; x++)
  {
    printf("%c", toupper(sptr1[x]) );
      sptr1[x]++;

  }
    puts("");
    puts(sptr1);
*/

  return 0;
}
void man_str(char * sptr1, char * sptr2)
{
  puts(sptr1);
  *sptr1 = tolower(*sptr1);
  sptr2[13] = ',';
  printf("%c", sptr2[14] = 32);
  sptr1[10] = '!';
  strncat(sptr2, sptr1, MAX);
  puts(sptr2);
}
