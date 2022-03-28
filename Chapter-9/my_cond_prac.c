/* my_cond_prac.c */
#include <stdio.h>

#define FIVE 5
#define TEN 10

void print_cond(int x);
void alter(int * pa, int * pb);
void return_bigger(int x, int y, int z);

int main(void)
{

    int a = 5, b = 100, c = 15;
    int x = 100, y = 20, z = 3000;

    alter(&a, &b);
    return_bigger(x,y,z);

    return 0;
}


void alter(int *pa, int *pb)
{
    int temp;
    temp = *pa + *pb;
    *pa = temp;
    temp = *pa - *pb;
    *pb = temp;
    printf("%i\n", *pa);
    printf("%i\n", *pb);

}

void return_bigger(int x, int y, int z)
{

  if(x > y && x > z)
  {
    printf("%i x is highest\n", x);
  }
  else if (y > z)
  {
    printf("%i y is highest\n", y);
  }
  else
  {
    printf("%i z is highest\n", z);
  }

}
