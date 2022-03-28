/* average.c--practice student averages passing array to function */
#include <stdio.h>

#define MAX 5
#define MAXSCORE 100

void displayArray ( const int scores[], int n);
void getAverage (const int scores[], int n);
void highLowNumb (const int scores[], int n);

int main(int argc, char const *argv[])
{

    int scores[MAX] = {81, 98, 58, 89, 99};

    displayArray(scores, MAX);
    getAverage(scores, MAX);
    highLowNumb(scores, MAX);


  return 0;
}

void displayArray (const int scores[], int n)
{
  int x;
  for (x = 0; x < MAX; x++)
    printf("Value: %d\n", scores[x]);
}

void getAverage (const int scores[], int n)
{
  int temp, average;
  int x;

  for ( x = 0; x <= 4; x++)
  {

    //temp = scores[x] + temp;
    temp += scores[x];
    average = temp / MAX;
  }
    printf("Average is: %d\n", average);

}
// function does not work
void highLowNumb (const int scores[], int n)
{
  int temp, high, low;
  int x;

  for (x = 0; x < MAX; x++)
    {
        temp = scores[x];
          if (temp > MAXSCORE)
            high = temp;
          if (temp < high)
             low = temp;
    }
    printf("**********************************\n");
    printf("High: %d Low: %d\n", high, low);

}
