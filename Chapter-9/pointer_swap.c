/*pointer_swap.c-- swap pointers smallest to largest */
#include <stdio.h>

void double_swap (double * pa, double * pb, double * pc);


int main(void)
{
  int loop;
  double a,b,c;


  printf("Please enter double values: \n");
  printf("Double 1:> ");
  scanf("%lf", &a);
  printf("\nDouble 2:> ");
  scanf("%lf", &b);
  printf("\nDouble 3:> ");
  scanf("%lf", &c);

  double_swap(&a, &b, &c);

return 0;

}

void double_swap(double * pa, double * pb, double * pc)
{
  double  temp;

  printf("Orignal:\n");
  printf("A = %.2f, B = %.2f, c = %.2f\n", *pa, *pb, *pc);

  //swap them around
if(*pa > *pb)
{
  temp = *pb;
  *pb = *pa;
  *pa = temp;
}

if(*pb > *pc)
{
    temp = *pc;
    *pc = *pb;
    * pb = temp;

      if(*pa > *pb)
      {
          temp = *pb;
          *pb = *pa;
          *pa = temp;
    }
}

    printf("Lowest %.2f : higher %.2f : highest %.2f\n", *pa, *pb, *pc);

}// fix this logic. Use elimination after evaluation
// if not this || this, then its got be this.
