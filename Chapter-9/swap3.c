/* swap3.c -- using pointer to make swapping work */
#include <stdio.h>
void interchange(int * u, int * v);

int main(void)
{
    int x = 5, y = 10;
    printf("Orignally x = %i and y = %i.\n", x, y);
    interchange(&x, &y); // send address to function
    printf("Now x = %i and y = %i.\n", x, y);

    return 0;
}

void interchange(int * u, int * v)
{
    int temp;

    temp = *u;  // temp gets value that u points to
    *u = *v;
    *v = temp;
}
