/* swap2.c -- first attempt at a swapping function */
#include <stdio.h>
void interchange(int u, int v); /* declare function */

int main(void)
{
    int x = 5, y = 10;

    printf("Orignally x = %i and y = %i.\n", x, y);
    interchange(x, y);
    printf("Now x = %i and y = %i.\n", x, y);

    return 0;
}

void interchange(int u, int v) /*define function */
{
    int temp;
    printf("Orignally u = %i and v = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %i and v = %i.\n", u, v);
}
