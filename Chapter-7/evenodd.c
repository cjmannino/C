#include <stdio.h>
#define END 0
int main(int argc, char const *argv[])
{

  signed int start, evenCounter = 0, oddCounter= 0;
  float evenTotal, oddTotal;

  printf("Please enter an integer: ( 0 to quit ) \n");

  while (scanf("%i", &start) == 1 && start != END)
  {
  	   if (start % 2 == 0)
       {
  		  evenCounter++;
        evenTotal +=  start;
  	   }

  	   else
  	   {
  		  oddCounter++;
  		  oddTotal += start;
  	   }


  } // end of while loop

  if (evenCounter > 0)
      printf("Even -> Total: %2.0f   Average:  %.2f\n", evenTotal,
      evenTotal / evenCounter);

  if (oddCounter > 0)
      printf("Odd  -> Total: %2.0f  Average:  %.2f\n", oddTotal, 
      oddTotal / oddCounter);

  printf("You entered %i even numbers",evenCounter);
  printf(" and %i odd numbers.\n", oddCounter);
  printf("BYE!\n");

	return 0;
}
