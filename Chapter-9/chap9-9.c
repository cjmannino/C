/* chap9-9.c -- program exercise */
#include <stdio.h>
#include <stdbool.h>


void show_display(void);
int low_high_limit(int low, int high);
void buffer_flush(void);

int main(void)
{
  int ret_limit;

  show_display();

  while ( (ret_limit = low_high_limit(1, 4) )!= 4)
  {
    printf("My choice was: %i\n\n", ret_limit);
    show_display();
  }
  printf("BYE!!!\n");

  return 0;

}

void show_display(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files           3) move files\n");
    printf("3) remove files         4) quit\n");
    printf("Enter the number of your choice:\n");

}

int low_high_limit(int low, int high)
{
  int user_choice, good_input;

  good_input = scanf("%i", &user_choice) == 1;
  while (good_input == 1 && (user_choice < low || user_choice > high) )
  {
    printf("Please enter a valid number from the menu\n\n");
    show_display();
    scanf("%i", &user_choice);

  }
  if(good_input != 1)
  {
    printf("WRONG INPUT START CRASH\n");
    user_choice = 4;
  }
  return user_choice;

}
