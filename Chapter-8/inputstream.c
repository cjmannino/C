/*inputstream. c */
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
  char user_input;
  int upper, lower, char_count, space, punct;

  printf("Enter characters use CTRL-D to quit\n");

  while (scanf("%c", &user_input) != EOF)
  {
    if(islower(user_input) == 1)
      lower++;
    else if(isupper(user_input) == 1)
      upper++;
    else if(isspace(user_input) ==1)
      space++;
    else if(ispunct(user_input) == 1)
      punct++;
      else
        char_count++;
  }
puts("");
printf("Total UpperCase: %i\n", upper);
printf("Total LowerCase: %i\n", lower);
printf("Total WhiteSpace: %i\n", space);
printf("Total Punctuation: %i\n", punct);
printf("All others: %i\n", char_count);

  return 0;
}
