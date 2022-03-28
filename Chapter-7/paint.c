/* paint.c -- uses conditional operator */
#include <stdio.h>
#define COVERAGE 350		//square feet per paint can 
 
 int main(int argc, char const *argv[])
 {
 		int sq_feet;
 		int cans;

 		printf("Enter nuber of square feet to be painted:\n");
 		while (scanf("%i", &sq_feet) == 1)
 		{
 			cans = sq_feet / COVERAGE;
 			cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
 			printf("You need %i %s of paint.\n", cans, cans == 1 ? "can" : "cans");
 			printf("Enter next value ( q to quit):\n");
 		}
 	return 0;
 }