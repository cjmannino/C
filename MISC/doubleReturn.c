/*doubleReturn.c-- double return--returns the largest value*/
#include <stdio.h>
#define MAX 5

void displayArray (const double (* ar), int rows);
void getLargeValue (const double (* ar), int rows);
void difference (const double (* ar), int rows);
void reverse (double (*ar), int rows);

int main(int argc, char const *argv[])
{
  double money[MAX] = {223.45, 689.34, 712.45, 453.89, 245.12};

  displayArray(money, MAX);
  getLargeValue(money, MAX);
  difference(money, MAX);
  reverse(money, MAX);



  return 0;
}

void displayArray (const double (* ar), int rows)
{
    int x;
    for (x = 0; x < MAX; x++)
      printf("Orignal[%d] %2.2f\n", x, ar[x]);

  }
void getLargeValue (const double (*ar), int rows)
{
  double high = 0;
  int x;

  high = ar[0];

  for (x = 0; x < MAX; x++)
      if (ar[x] > high)
          high = ar[x];
  printf("\nHighest Value: %.2f\n", high);
}
void difference (const double (* ar), int rows)
{
  double high = 0;
  double low = 0;
  double difference;
  int x;

  high = low = ar[0];

  for (x = 0; x < MAX; x++)
  {
    if(low > ar[x])
       low = ar[x];

    if (high < ar[x])
        high = ar[x];
  }
  printf("High: %.2f Low: %.2f\n", high, low);
  printf("Difference: %.2f\n\n", high - low);

}
void reverse (double (*ar), int rows)
{
  double temp[MAX];
  int x, c;

  for (x = 0, c = 4; x < MAX; x++, c--)
  {
      temp[x] = ar[c];
      printf("reverse[%d]: %.2f\n", x, temp[x]);
  }

}//end of routine
