/*abc_position.c -- values the numerical ASCII of characters in alphabet*/
#include <stdio.h>
#include <ctype.h>

void valid_input(char user_ch);
void alpha_position (char user_ch);
void buffer_flush(void);

int main(void)
{

  char user_ch;
  char a = 'a';

  printf("Please enter letters (from alphabet) use (CTRL C to quit)\n");
  while (scanf("%s", &user_ch) != EOF)
{
    valid_input(user_ch);
    alpha_position(user_ch);
}

  return 0;

}

void buffer_flush(void)
{
		while(getchar() != '\n')
		;

}

void valid_input(char user_ch)
{

  if(isalpha(user_ch) != 1)
    {
      buffer_flush();
      printf("%c is not a letter", user_ch);
      printf("\nPlease enter a letter from the alphabet ");
      printf("such as 'a' 'b' or 't'\n");

    }

}

void alpha_position(char user_ch)
{

  if (user_ch >= 'a' && user_ch <= 'z')
    printf("POSITION: %i\n", user_ch - 'a' + 1);
  else if(user_ch >= 'A' && user_ch <= 'Z')
    printf("POSITION: %i\n", user_ch - 'A' + 1);
    //buffer_flush();

}
