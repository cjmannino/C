/* string_in.c -- EX.8 PG.509 */
#include <stdio.h>
#include <string.h>
#define MAX 50


char * string_compare(char * strSource, char * strCompare);
//void flush(char *strSource, int n);
void flush(char * str);


int main(int argc, char const *argv[])
{

   char * ret_val;
   char source[MAX];
   char compare[MAX];
   char ch;

        printf("Please enter a sting: ");
        fgets(source, MAX, stdin);
        flush(source);

        while(source[0] != '\n')
        {
            printf("Please enter a comparsion string: ");
            fgets(compare, MAX, stdin);
            flush(compare);

            ret_val = string_compare(source, compare);
            if(ret_val == NULL)
                puts("No Match Found");
            else
                  printf("Character %c was found at %p\n", *ret_val, &ret_val);

            printf("Please enter a sting: (empty line to quit) ");
            fgets(source, MAX, stdin);

        }
          puts("Bye!");
  }// end of main

char * string_compare(char * strSource, char * strCompare)
{
  int x = 0;

  while(*(strSource) != '\0')
  {
      while (*(strSource+x) == *(strCompare+x))
      {
        x++;
        if(*(strCompare + x) == '\0')
          return strSource;
      }
      strSource++;
  }
  return NULL;

  } //end of string_compare


//void flush(char *strSource, int n)
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



