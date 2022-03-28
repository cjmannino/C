/*bufferread.c -- reads character white space, etc. */
#include <stdio.h>
#include <ctype.h>
#define STOP '#'


int main(int argc, char const *argv[])
{
	char ch;
	int count;
	int newLine, newChar;

	printf("Please enter text (# to quit)\n");

	while ((ch = getchar()) != '#')
	{
		if(isspace(ch))
			newLine++;
		if(isalnum(ch))
			newChar++;
		count = newLine + newChar;
	}
	printf("\nNewline: %i Char: %i\nTotal Chars: %i \n", 
			newLine, newChar, count);


	return 0;
}