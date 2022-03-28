/*myfunc1.c -- practice using a general function with arguements*/
#include <stdio.h>

#define SPACE ' '
#define MAX 20

void silly_func (char, int);
int mixed_up(int x, int i);

int main(void)
{
    char ch;
    int n, send;

    printf("Please enter a single character: ");
    ch = getchar();
    printf("Enter a number from 1 - 20 ");
    scanf("%i", &n);

    silly_func(ch, n);

    send = mixed_up(10, 90);
    printf("%i", send);

    return 0;

}

void silly_func(char ch, int n)
{
  printf("Character %c is %i years old\n", ch + 1, n - 1);
}

int mixed_up(int x, int i)
{

     return x + i;
}
