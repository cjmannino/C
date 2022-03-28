/*irs.c -- a tax pre program */
#include <stdio.h>
#include <stdbool.h>

#define TAX1 0.15f
#define TAX2 0.28f

void flush (void);
float reportTaxSch (float taxSch, float yourSalary);

int main(int argc, char const *argv[])
{
  const float single = 17850.00, headofHouse = 23900.00;
  const float marriedJoint = 29750.00, marriedSeparated = 14875.00;
  float taxSch, yourSalary, adjreturn;
  int useMenu;
  bool test = true;

do {

      printf("[1] Single  [2] Head of Household");
      printf("  [3] Married-Joint [4] Married Separated\n");
      printf("\t\t\t[5] to quit\n");
      printf("\nPlease Enter how you are filing: ");
      test = scanf("%i", &useMenu);

  switch (useMenu)
  {
    case (1) :
               taxSch = single;
               break;

     case (2) :
                taxSch = headofHouse;
                break;

     case (3) :
                taxSch = marriedJoint;
                break;

     case (4) :
                taxSch = marriedSeparated;
                break;

      case (5) :
               printf("Good-Bye!\n");
               return 0;

      default:
               flush();
               printf("Please enter a number [1 <-> 5]\n");
               continue;
  }
  printf("Please enter your income (salary): "); //use after the buffer to get
  scanf("%f", &yourSalary);                      //case(5) & default to work.

        adjreturn = reportTaxSch(taxSch, yourSalary);
        printf("\nOn your Income $%2.f you have to pay: $%.2f\n\n\n",
                yourSalary, adjreturn);
        flush();

} while(test);


  return 0;
}

float reportTaxSch (float taxSch, float yourSalary)
{
  float tempTax;
  if(yourSalary > taxSch)
  return tempTax = (yourSalary - taxSch) * TAX2 + (TAX1 * taxSch);
  else
  return tempTax = yourSalary * TAX1;

}

void flush (void)
{
  while (getchar() != '\n')
		;
}
