/*driverchar.c -- prints user input character*/
#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
  char ch;
  int i, j;

    printf("Please enter a character to print: ");
    scanf("%c", &ch);
    printf("\nEnter the number of times: ");
    scanf("%i",&i);

    chline(ch, i, 4);

    return 0;

}

void chline(char ch, int i, int y)
{
    int f_cycle, s_cycle;

    for (f_cycle = 0; f_cycle <= i; f_cycle++)
    {
      for (s_cycle = y; s_cycle <= f_cycle; --s_cycle)
          printf("%c", ch);
    }
    printf("\n");
}
