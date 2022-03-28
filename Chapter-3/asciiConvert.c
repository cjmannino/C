/* asciiConvert.c--program to ask user for ASCII code and conver to actual
character */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char getCode;
    printf("Please enter a ASCII code: ");
    scanf("%d", &getCode);
    printf("The ASCII code is: %d and the converation is: %c\n",getCode, getCode);

  return 0;
}
