/*stringPointers.c-- practice with string pointers and other stuff*/
#include <stdio.h>
#define MESG "I love C programing."

int main(void)
{
  const char * pt1 = "This is a pointer string.";
  const char * pt2 = "String literals are interesting.";

  puts(pt1);
  puts(pt2);

  printf("PT1 address: %p\n", pt1);
  printf("PT2 address: %p\n", pt2);
  puts(MESG);
  printf("Address of MESG %p\n", MESG);


  return 0;
}
