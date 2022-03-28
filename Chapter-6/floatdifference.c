/*floatdifference.c --user inputs two float displays difference divided by
their product*/

#include <stdio.h>
void difference (float userFirst, float userSecond);

int main(int argc, char const *argv[])
{
  float userFirst, userSecond;

  printf("Please enter two float values: ");

  while (scanf("%F%F", &userFirst, &userSecond) == 2)
  {
    difference(userFirst, userSecond);
    printf("Enter two more float values (q to quit\n");
  }


  return 0;
}// end of main



void difference (float userFirst, float userSecond)
{
  float temp1, temp2;

  temp1 = userFirst - userSecond;
  printf("\nThe difference between %1.2F and %1.2F is: %1.2F", userFirst, userSecond,
          temp1);

  temp2 = userFirst * userSecond / temp1;
  printf("\nThe difference divided by the product %1.2F\n", temp2);

}
