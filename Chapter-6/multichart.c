
/* multichart */

#include <stdio.h>
#define INNER 10
#define OUTER 10

int main (void) 
{

	int a, b;

	printf("The times table\n");

	for (a = 1; a <= OUTER; a++)
	{

		for (b = 1; b <= INNER; b++)
		{
			printf("%i\t", a * b);
		}

	printf("\n");	
	}

	return 0;

} // end of main

