/*my_array_prac.c -- pass arguments to an array */
#include <stdio.h>
#define SIZE 10

int add(int * begin, int * end);

int main(void)
{
  int final_value;

  int number[SIZE] = {0,1,2,3,4,5,6,7,8,9};

  final_value = add(number, number + SIZE);
  printf("The sum is: %i\n", final_value);
  printf("size of array: %lu\n", sizeof number / sizeof number[9]);

  return 0;
}

int add(int * begin, int * end)
{
    int total = 0;
    while( begin < end)
    {
        total += *begin++; //page 406
          printf("Pointer Value %i || Pointer Address %p\n", *begin, &begin);
    }
  return total;
}
