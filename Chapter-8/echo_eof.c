/* echo_eof.c -- reports input to end of file */
#include <stdio.h>

int main (void)
{
	int ch;

	while ((ch = getchar()) != EOF)
	    putchar(ch);

	return 0;
}
