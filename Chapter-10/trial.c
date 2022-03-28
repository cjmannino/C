/*trial.c -- multi-dimensional array practice again*/
#include <stdio.h>
#define MONTH 4
#define WEEK 7

int main(int argc, char const *argv[])
{

  const float (* f_ptr)[WEEK];

  const float temp[MONTH][WEEK] =
  {
      {87.7, 92.1, 78.3, 79.5, 88.8, 91.2, 89.9},
      {78.3, 87.2, 88.4, 73.2, 65.3, 88.9, 91.2},
      {89.3, 78.5, 89.3, 88.2, 98.2, 89.4, 88.4},
      {78.6, 75.6, 81.2, 79.9, 80.1, 81.1, 82.3},
  };

  f_ptr = temp;
  printf("address of temp:       %p\n", &temp);
  printf("address of temp[]:     %p\n", &temp[MONTH]);
  printf("address of temp[][]:   %p\n", &temp[MONTH][WEEK]);

  printf("address of temp:       %p\n", *f_ptr);
  // try f_ptr[something]
  return 0;
}
