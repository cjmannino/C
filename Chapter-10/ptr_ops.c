
/* ptr_ops.c -- pointer operations */
#include <stdio.h>

int main(void)
{
  int urn[5] = {100,200,300,400,500};
  int * ptr1, * ptr2, * ptr3;

  ptr1 = urn;             // assign an addres to a pointer
  ptr2 = &urn[2];         // ditto
                          // deference a pointer and take
                          // the address of a pointer
  printf("pointer value, deference pointer, pointer address:\n");
  printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

  //pointer addition
  ptr3 = ptr1 + 4;
  printf("\nadding an int to a pointer:\n");
  printf("ptr4 + 4 = %p, *(ptr4 + 3) = %d\n", ptr1 + 4, *(ptr1 + 3));

  ptr1++;          // increment a pointer
  printf("\nvalues after ptr1++:\n");
  printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

  ptr2--;
  printf("\nvalues after --ptr2:\n");
  printf("ptr2 = %p. *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

  --ptr1;       // restore to orignal nvalues
  ++ptr2;       // restore to orignal nvalues
  printf("\nPointer reset to orignal values:\n");
                // subtract one pointer from another
  printf("\nsubtracting one pointer from another:\n");
  printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1);
                // subtract an integer from another nPointer
  printf("\nsubtracting an int from a pointer:\n");
  printf("ptr3 == %p, pr3 - 2 =%p\n", ptr3,  ptr3 -2);

  return 0;

}
