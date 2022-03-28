/* charloop.c */
#include <stdio.h>
#define ASCIIMAX 64
#define LOOP 7

int main(int argc, char const *argv[])
{
  int beginASCII, interation, b;

for (interation = 1; interation < LOOP; interation++)
{
    for (beginASCII = 70, b = 1; b <= interation; b++, beginASCII--)
        printf("%c", beginASCII);
        printf("\n");
}



  return 0;
}
/* #include <stdio.h>

int main(void)
{
	for (int i = 1; i < 7; i++)
	{
		for (char c = 'F'; 'F' - c < i; c--)
		{
			printf("%c", c);
		}
		printf("\n");
	}

	return 0;
}
*/
// Alternative using char instead of int.
