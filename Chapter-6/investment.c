/*investment.c -- simulated invest/interest program */
#include <stdio.h>
#define MAX 32

float interest( float INTEREST_RATE, float startValue);


int main(int argc, char const *argv[])
{
   const float INTEREST_RATE = 0.05;
   float initialInvestment = 100.00;
   float investment;
   float afterApplied;
   int i;
   char customer[MAX] = "Mrs. Daphine";

   printf("\n\t\t**Personalized**Investment**\n");
   printf("\nCustomer: %s initial investment %2.2f\n", customer, initialInvestment);

   afterApplied = interest ( INTEREST_RATE, initialInvestment);

   printf("INTEREST_RATE of: %2.2f%%", INTEREST_RATE);
   printf(" will take %1.0f years.\n", afterApplied);

  return 0;
}//end of main



float interest( float INTEREST_RATE, float startValue)
{
  float temp1, temp2, temp3;

  temp1 = startValue;
  while(temp2 <= 100.00)
  {
    temp2 = INTEREST_RATE + 12;
    temp3 = temp1 / temp2;

    return temp3;
  }
}//end of interest
