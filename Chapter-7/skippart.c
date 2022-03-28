/* skippart.c -- uses continue to skip part of the loop */
#include <stdio.h>

int main(void)
{
	const float MIN = 0.0f;
	const float MAX = 100.0f;

	float score; 
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("\n****MIN%0.1f\n", min);
	printf("****MAX%0.1f\n", max);

	printf("Enter the first score ( q to quit): ");
	while (scanf("%f", &score) == 1)
	{
		if (score < MIN || score > MAX)
		{
			printf("%0.1f is an invalid value. Try again: ", score);
			continue; 	//jumps to while loop test condition
		}
		printf("Accepting %0.1f:\n", score);
		min = (score < min)? score: min;	// means min = score or min = min
		printf("\nMIN1 %0.1f Score1 %0.1f\n",min, score);
		max = (score > max)? score: max;
		printf("\nMIN2 %0.1f Score2 %0.1f\n",min, score);
		total += score;
		n++;
		printf("Enter next score (q to quit)\n");
	}
		if (n > 0)
		{
			printf("Average of %d scores is %0.1f.\n", n, total / n);
			printf("Low = %0.1f, high = %0.1f\n", min, max);
		}
	
	else
		printf("No valid scores were entered.\n");

	return 0;
}
