/*intsqucub.c -- ask user to integer, low and high limits */
#include <stdio.h>

int main(int argc, char const *argv[])
{
  int upper = 0, lower = 0;
  int userSelect;
  int loop;

  printf("This program will square and cube your integer\n");
  printf("\nPlease enter upper limit integer:");
  scanf("%i", &upper);

  printf("\nPlease enter lower limit integer:");
  scanf("%i", &lower);

  printf("\n");

  printf("---------------|---------------|---------------\n");
  printf(" Integer       | Square        | Cube          \n");
	printf("---------------|---------------|---------------\n");

  for (loop = lower; loop <= upper; loop++)
      printf("%i\t\t  %i\t\t  %i\n",loop, loop * loop, loop * loop * loop);

printf("\n");

return 0;
}
