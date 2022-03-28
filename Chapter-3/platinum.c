/* platinum.c -- your weight in platinum */

# include <stdio.h>

int main (void)
{
	float weight;
	float value;
	float *pweight;

	printf("Are you worth your weight in platinum?\n");
	printf("let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	scanf("%f", &weight);
	value = 1700.00 * weight * 14.5833;

	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! if platinum prices drop,\n");
	printf("Eat more to maintain your value.\n");

	/* address of weight */
	printf("\n\n\n");
	pweight = &weight;
	printf("What is the value stored at variable weight: %f\n",*pweight);
	printf("%f\n", pweight);


	return 0;
}
