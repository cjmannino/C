/* mygetchar.c -- learn getchar and putchar */
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char ch; 
	char storage; 
	unsigned int index = 0;

	printf("Please enter character ( @ to quit \n");
	while ((ch = getchar()) != '@')
	{
		storage = ch; 
		
		if(isdigit(storage)) 
		{
			printf("No Numbers Please\n");
			continue;
		}
		if(isalpha(storage))


		do 
		{
			printf("%c || %3i ", storage, storage);

			index++;

		} while (index % 8 == 0);
		
 	}
 	printf("\n");

	return 0;
} // end of main