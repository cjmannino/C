/*pointer_math.c -- a practice to learn pointer & math */
#include <stdio.h>
#define SIZE 5

int main(void)
{
  int loop;
  char ch;
  int * iptr, ptr;
  char * cptr;

  int numbers[SIZE] = {1,2,3,4,5};
  char charcters[SIZE] = {'a', 'p', 'p', 'l', 'e'};

  printf("Print the arrays:\n");

  for (loop = 0; loop <= SIZE - 1; loop++)
    {
        printf("Numbers[%i] = %i ", loop, numbers[loop]);
        printf("Characters[%i] = %c\n", loop, ch = charcters[loop]);
    }
    iptr = numbers;
    ptr = numbers[4];
    printf("\nThe address of iptr: %p\n", &iptr);
    printf("iptr = %i\n", *iptr);
    printf("iptr + 1 = %i\n", *iptr + 1);
    printf("The address of iptr: %p\n", &iptr);
    printf("iptr value + 10 = %i\n", *(iptr) + 10);
    printf("The address of iptr: %p\n", &iptr);
    printf("numbers[4] - 3 = %i\n", *(iptr + 4) - 1);
    printf("The address of iptr: %p\n", &iptr);
    puts("");

    cptr = charcters;
    printf("cptr address is %p\n", &cptr);
    printf("*cptr0: %c\n", *cptr);
    printf("*cptr1: %c\n", *(cptr + 1));
    printf("*cptr2: %c\n", *(cptr + 2));
    printf("*cptr3: %c\n", *(cptr + 3));
    printf("*cptr4: %c\n", *(cptr + 4));
    printf("cptr address is %p\n", &cptr);
    printf("cptr + 1 = %c\n", *cptr + 1);
    puts("");
    printf("cptr + 4 - 3 = %c\n", *(cptr + 4) - numbers[3]);
    printf("cptr address is %p\n", &cptr);
    return 0;
}
