/* wordcnt.c -- counts character, word, lines */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'


int main(int argc, char const *argv[])
{
	char c;					// read in character
	char prev;				// previous character read
	long n_chars = 0L;		// number of characters
	int n_lines = 0;		// number of lines
	int n_words = 0;		// number of words
	int p_lines = 0; 		// number of partial lines
	bool inword = false; 	// == true if c is in a word 

	printf("Enter test to be analyzed ( | to terminate):\n");
	prev = '\n';			// used to identify complete lines
	while (( c = getchar())!= STOP)
	{
		n_chars++;			// count characters
		if ( c == '\n')
			n_lines++;		// count lines
		if (!isspace(c) && !inword)
		{
			inword = true; 	// starting a new word
			n_words++;
		}
		if (isspace(c) && inword)
			inword = false;	// reaches end of word
		prev = c;
	}
	if (prev != '\n')
		p_lines = 1;
	printf("characters = %ld, words = %i, lines = %i" ,n_chars, n_words, n_lines);
	printf(" partial lines = %i\n", p_lines);


	return 0;
}