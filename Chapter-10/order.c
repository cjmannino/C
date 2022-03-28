/* order.c -- precedence in pointer operations */
#include <stdio.h>
int data[2] = {100, 200};
int moredata[2] = {300, 400};

int main(void)
{

    int * p1, * p2, * p3;
    p1 = p2 = data;
    p3 = moredata;

    printf("  *p1 = %i,   *p2 = %i,     *p3 = %i\n",
              *p1     ,   *p2     ,     *p3);
puts("");
    printf("*p1++ = %i, *++p2 = %i,   (*p3)++ = %i\n",
            *p1++     , *++p2     ,   (*p3)++);
puts("");
    printf("  *p1 = %i,   *p2 = %i,    *p3 = %i\n",
              *p1     ,  *p2     ,    *p3);

  return 0;
}
//(*p3)++ remember associates from right to left. use the value of p3
// and increment the value not the pointed to.
//pg.406
