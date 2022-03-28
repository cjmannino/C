/*ifelse.c -- practice if else */
#include <stdio.h>
#define MAX 25

int main(int argc, char const *argv[])
{
	signed int whyme = 0, enterallready = 0;

	printf(" Please enter a positive number: (@ to quit)\n");
	while (scanf("%i", & enterallready) == 1 && enterallready!= MAX)
	{
		if (enterallready > 0 && enterallready <= 10)
		{
			printf("You have not entered the correct number:\n");
			continue;
		}

		else if (enterallready >= 10 && enterallready < 24)
		{
			printf("You are on your way to entering the lauch sequence:\n");
			continue; 
		}

		else if (enterallready == 24)
		{
			printf("Nuclear Missles have been launch...to China\n");
			break;
		}

		else if (enterallready > MAX)
		{
			printf("You have failed your country. Loser!\n");
			break; 
		}

			
	}


	return 0;
}