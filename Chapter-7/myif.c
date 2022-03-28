/*myif.c -- practice with if else statements */
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int secret = 7;
	printf("Please enter a number from (1 - 9: ");

	while (scanf("%i", &secret) == 1)
		{
		if (secret == 7)
				printf("****You Guessed it*****\n");
		else if (secret <=5)
				printf("Higher\n");
		else
				printf("Keep Guessing?\n");
			}

	return 0;
}
