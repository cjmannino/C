/*array_practice.c -- passing arrays to function via pointer or array name */
#include <stdio.h>
#define SIZE 5

void char_print (const char * cptr, const int n);
void average (const int * start, const int * end);

int main(int argc, char const *argv[])
{

  char charcters[SIZE] = {'A', 'p', 'p', 'l', 'e'};
  int numbs[SIZE] = {97, 94, 87, 76, 92};

  char_print(charcters, SIZE);
  average(numbs, numbs + SIZE);

  return 0;
}

void char_print(const char * cptr, const int n)
{
  int x;
  for (x = 0; x < n; x++)
    printf("%c", *(cptr + x));
    puts("");
}

void average (const int * start, const int * end)
{
  float average, total;
  int x;
  while (start < end)
    total += *start++;
  average = total / SIZE;
  printf("The total is: %.2f and the average: %.2f\n", total, average);

}
