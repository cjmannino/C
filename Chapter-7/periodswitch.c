/*periodswitch.c -- replaceds punctuations marks */
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch;
	signed int charCountOne = 0, charCountTwo = 0;

	printf("Start entering some sentences (use # to quit)\n");

	while ((ch = getchar()) != '#')
	{
					if (ch == '.')
					{
							printf("!");
							charCountOne++;
					}
					else if (ch == '!')
					{
							printf("!!");
							charCountTwo++;
					}
					else
							printf("%c", ch);
	}// end of while loop

	printf("\nPeriod substitions: %i and Exclamation %i\n",
					charCountOne, charCountTwo);
	return 0;
}
