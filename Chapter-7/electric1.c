
#include "electric.h"

int main(int argc, char const *argv[])
{
    double kwh;
    double bill;

    printf("\t\t************Electric****Bill****Calculate****\n");
    printf("Please enter the kwh used: \n");
    scanf("%lf", &kwh);
    if (kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if (kwh <= BREAK2)
        bill = BASE1 + (RATE2 * (kwh - BREAK1));
    else if (kwh <= BREAK3)
        bill = BASE2 + (RATE3 * (kwh - BREAK2));
    else
        bill = BASE3 + (RATE4 * (kwh - BREAK3));

    printf("****The charge for %.1f kwh is $%1.2f****\n", kwh, bill);
  return 0;
}
