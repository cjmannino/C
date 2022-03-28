/* summing.c -- sums integers entered interactively */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    long num;
    long sum = 0l; // initialize sum to zero
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 1)   // == means "is equal to"
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }

      printf("Those integers sum to %ld.\n", sum);
      printf("BYE!!!\n");

      return 0;
}
