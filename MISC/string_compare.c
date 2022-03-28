/* string_compare.c -- compare strings to find match */
#include <stdio.h>
#include <string.h>
#define MAX 50

 char * string_compare(char * usource, char * ucompare, int x);
 void flush(char *st, int n);

 int main (void)
 {
     char source[MAX];
     char compare[MAX];
     char * ret_val;


    printf("Enter a source string: ");
    fgets(source, MAX, stdin);
    flush(source, MAX);
     do
     {
        printf("Please enter a comparsion string: ");
        fgets(compare, MAX, stdin);
        flush(compare, MAX);
        ret_val = string_compare(source, compare, MAX);

        if(ret_val == NULL)
            puts("No Match Found");
        else
            printf("Character %c was found at %p\n", *ret_val, &ret_val);
         printf("Enter another source string (empty line to quit)\n");
         fgets(source, MAX, stdin);

     }while(source[0] != '\n');

  return 0;
 }

 void flush(char *st, int n)
 {
     int x = 0;
     while(st[x] != '\0')
     {
        x = strlen(st);
        if(st[x]== '\n')
            st[x] = '\0';
     }

 }

char * string_compare(char * strSource, char * strCompare, int n)
{
  int x = 0;


}


