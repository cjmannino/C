/*charprint.c-- pass arguments to a function char, ints */
#include <stdio.h>

void char_print(char ch, int times, int lines);

int main(void)
{

char ch = '$';
int times = 5, lines = 10;

char_print(ch, times, lines);



  return 0;
}

void char_print(char ch, int times, int lines)
{
  int x, i;

for (x = 0; x < times; x++)
{
    for (i = 0; i < lines; i++)
      putchar(ch);
    puts("");

}
  puts("");
}
