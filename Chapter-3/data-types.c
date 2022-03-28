/* data-types.c * Data type and printf specificers */
#include <stdio.h>
int main(int argc, char const *argv[])
{
  int a = 100;
  signed int b = 231;
  long int c = 40000;
  float f = 451.21;
  double d = 9823.121;

  printf("------------INT A----------\n");
  printf("Integer a= %d\n", a);
  printf("Integer a in Hex %x\n",a);
  printf("Integer a in Oct %o\n",a);
  printf("-----------------------------\n");

  printf("------------Signed INT--------\n");
  printf("signed int b= %d\n",b);
  printf("signed int b in Hex %x\n",b);
  printf("sogned int b in Oct %o\n",b);
  printf("-----------------------------\n");





  return 0;
}
