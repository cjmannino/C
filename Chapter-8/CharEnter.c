/* CharEnter.c -- print user input characters in ASCII decimal. */
/* special attention to non-printing characters (space, \t & \n*/

#include <stdio.h>
#include <ctype.h>

char char_valid(void);
void char_print(char ch);

int main(int argc, char const *argv[])
{
  char ASCII_Value; // <- may need to be int?
  char char_count;



  printf("Please enter character (use CTL-D to end)\n");
  char_count = char_valid();



  return 0;
}

char char_valid(void)
{
  char ch;
  int count = 0;

  while (scanf("%c\n", &ch) != EOF)
    {
        if (isalnum(ch) && isprint(ch))
        {
          count++;
          char_print(ch);
        }
        else
          char_print(ch);
  }

    return count;
}

void char_print(char ch)
{
    if (ch>= ' ')
        printf("\'%c\' : %i", ch, ch);
    else if (ch == '\n')
        printf("\'\\n\' : %i", ch);
    else if (ch == '\t')
        printf("\t'\\t\' : %i", ch);
    else // control characters
        printf("\'^%c\' : %i", ch + 64, ch);


}
