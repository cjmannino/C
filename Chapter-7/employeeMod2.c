/* employeeMod2.c -- calculate employee pay roll */
#include <stdio.h>
#include <stdbool.h>

// pay rates
#define RATE1 8.75
#define RATE2 9.33
#define RATE3 10.00
#define RATE4 11.20
//Tax rates
#define TAX1 0.15// first 300
#define TAX2 0.20 // 150 above 300
#define TAX3 0.25// all the rest
// constants
#define REGWORKWEEK 40
// over time rates
#define OVERTIME_RATE 1.5

float calGrossPay (float payRate, float hoursWorked);
float calTaxSchedule (float grossPay);


int main(int argc, char const *argv[])
{
  const int hund = 100;
  signed int menuChoice;
  float grossPay, hoursWorked, payRate, tempTAX;
  bool test;

  printf("*************************PAY**ROLL********************************\n");
  printf("*Enter the number corresponding to the desired pay rate or action *\n");
  printf("* [1] $%.2f/hr               [2] $%.2f/hr                         *\n", RATE1, RATE1);
  printf("* [3] $%.2f/hr              [4] $%.2f/hr                        *\n", RATE3, RATE4);
  printf("*                 [q] quit!                                       *\n");
  printf("******************************************************************\n");

  do
  {

  printf("Enter Pay Rate ( q to quit )\n");
  test = scanf("%i", &menuChoice);
  printf("Enter the hours worked: \n");
  test = scanf("%f", &hoursWorked);

        switch (menuChoice)
        {
          case (1) : payRate = RATE1;
                     break;

          case (2) : payRate = RATE2;
                     break;

          case (3) : payRate = RATE3;
                     break;

          case (4) : payRate = RATE4;
                     break;

          case (5) : while (getchar() != '\n') ;
                      test = false;
                      break;

          default : printf("Enter a choice 1 <-> 4 or q to quit\n");
                    continue;
          }//switch

            grossPay = calGrossPay (payRate, hoursWorked);
            tempTAX = calTaxSchedule (grossPay);
            grossPay = tempTAX;
             printf("Pay Roll is: %.2f\n", grossPay);

        }while (test);

return 0;
}//main

float calGrossPay (float payRate, float hoursWorked)
{
  float tempGross;

  if (hoursWorked > 40)
    return tempGross = hoursWorked * payRate * OVERTIME_RATE;
  else
    return tempGross = hoursWorked * payRate;
}

float calTaxSchedule (float grossPay)
{
  if (grossPay > 450.00)
        return grossPay / 100 - TAX2;
    else if (grossPay > 450.00)
        return grossPay - TAX3;
    else if (grossPay > 600.00)
         return grossPay - TAX3;
    else
      return grossPay - TAX1;

}
