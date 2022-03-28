/* pointer.c -- practice with some pointers */
#include <stdio.h>

int main (void)
{
    const int * iptr;
    float * fptr;

    int x = 100;
    float y = 336.89;

    const int urn[5] = {12,34,56,78,90};

    iptr = &x;
    printf("Address of iptr: %p and Address of x: %p\n", iptr, &x);
    printf("Deference iptr: %d and value of x: %d\n", *iptr, x);

    fptr = &y;
    printf("\nAddress of fptr: %p and Address of y: %p\n", fptr, &y);
    printf("Deference iptr: %.2f and value of x: %.2f\n", *fptr, y);

    iptr = urn;
    printf("Address of array urn %p\n", iptr);
    printf("Address of urn[0]:%p\n", &urn[0]);
    printf("\nAddress of array urn[1] %p\n", iptr + 1);
    printf("The value at urn[4] %d\n", *(iptr + 3) );
}
