/*chartoASCII.c -- print decimal values from user characters */
#include <stdio.h>
#include <ctype.h>
#define STOP '@'
#define CYCYLEMAX 8


int main(int argc, char const *argv[])
{
	char ch;
	unsigned int index = 0, loop = 0, b = 0;

	printf("Please enter characters (@ to quit)\n");

	while ((ch = getchar()) != '@')
	{
		if(isdigit(ch))
		{
			printf("Only charcters please!\n");
			continue;
		}

		if(isspace(ch))
			 continue;

		//if(isalpha(ch))
		//	index++;

			printf("[%c] : %3i ", ch, ch);

		loop++;
		if (loop % 8 == 0)
				printf("\n");

} // end of while
printf("\n");

	return 0;
} // end of main
