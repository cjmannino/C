/*abcGrocery.c -- calculates shipping costs */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define ARTICHOKES 2.05f // per lbs $
#define BEETS 1.15f // per lbs $
#define CARROTS 1.09f // per lbs $

#define REGULAR_LBS 5
#define EXTRA_LBS 20
#define REGULAR_SHIPPING 6.50f // > 100$ added to standard
#define EXTRA_SHIPPING 14.00f // over > 5 lbs && < 20 lbs $
#define SURPLUS_SHIPPING 0.05f // 20 > lbs $

int cal_veggies (void);
void buffer_flush(void);
float cal_Shipping (float);
void invoice_display (float, int, int, int);
int main(int argc, char const *argv[])
{
  unsigned int artichokes_amount, beets_amount, carrots_amount;
  unsigned int art_count, bet_count, car_count, temp_pounds;
  float temp_ship, ret_ship;
  char customer_choice;
  char ch = '$';
  bool evaluate = true;

    printf("\t\tWelcome to ABC Mail Order Grocery\n\n");
    printf("\tGrocery List:\n");
    printf("Vegatables Menu Per Pound\n");
    printf("-------------------------------\n");
    printf("[a]Artichokes %14c%4.2f\n",ch, ARTICHOKES);
    printf("[b]Beets %19c%3.2f\n",ch, BEETS);
    printf("[c]Carrots %17c%3.2f\n", ch, CARROTS);
    printf("-------------------------------\n");

do {
    printf("Chose your vegatable: ");
    //scanf("%c", &customer_choice);
    customer_choice = getchar();
    buffer_flush();
    if(customer_choice == 'q')
      break;

    customer_choice = tolower(customer_choice);

switch (customer_choice)
    {
      case 'a' :
                temp_pounds = cal_veggies();
                artichokes_amount = temp_pounds + artichokes_amount;
                break; // try +=

      case 'b' :
                temp_pounds = cal_veggies();
                beets_amount = temp_pounds + beets_amount;
                break;

      case 'c' :
                temp_pounds = cal_veggies();
                carrots_amount = temp_pounds + carrots_amount;
                break;

      case 'q' :
              printf("BYE!\n");
              break;

     default :
             printf("Please enter [a] for artichokes, [b] for beets, [c] for carrots\n");
              break;

    }

      buffer_flush();

    }while(evaluate);

//printf("Artichokes %i lbs, Beets %i lbs, Carrots %i lbs\n", artichokes_amount, beets_amount,carrots_amount);
  // now make functionm calculate the shipping per customer lbs //
  //print final price and shpping cost like an invoice
  // figure out how to get vegat in the cal_veggies function.
 temp_ship = artichokes_amount + beets_amount + carrots_amount;
 ret_ship = cal_Shipping(temp_ship);
 invoice_display(ret_ship, artichokes_amount,beets_amount,carrots_amount);

  return 0;
}

void buffer_flush (void)
{
  while(getchar() != '\n')
  ;
}

int cal_veggies (void)
{
  signed int temp_pounds;
  printf("How many of lbs.> ");
  scanf("%i", &temp_pounds);
  return temp_pounds;
}

float cal_Shipping (float temp_ship)
{
  float temp_price, a;

  if(temp_ship >= REGULAR_LBS && temp_ship >= EXTRA_LBS)
     return temp_price = temp_ship + EXTRA_SHIPPING;
  else if (temp_ship > EXTRA_LBS)
    return temp_price = (temp_ship - EXTRA_LBS) + SURPLUS_SHIPPING + EXTRA_SHIPPING;
  else
    return temp_price + REGULAR_SHIPPING;
}

void invoice_display (float ret_ship, int artichokes_amount, int beets_amount, int carrots_amount)
{
  printf("************************INVOICE*****************\n");
  printf("%.2i Artichokes @ $%.2f per lbs. \tcosting $%.2f\n", artichokes_amount, ARTICHOKES, \
          artichokes_amount + ARTICHOKES);
  printf("%.2i Beets @ $%.2f per lbs. \tcosting $%.2f\n", beets_amount, BEETS, \
            beets_amount + BEETS);
  printf("%.2i Carrots @ $%.2f per lbs. \tcosting $%.2f\n", carrots_amount, CARROTS, \
          carrots_amount + CARROTS);
  printf("\n");
  printf("Shipping weight %i lbs \n", artichokes_amount + beets_amount + carrots_amount);
  printf("Shipping discount of $%.2f\n", ret_ship - EXTRA_LBS);
  printf("Total shipping cost $%.2f\n", ret_ship);
  printf("GRAND TOTAL: $%.2f\n", ret_ship + artichokes_amount + beets_amount + carrots_amount);
  printf("************************************************\n");

}
