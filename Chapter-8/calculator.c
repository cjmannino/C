/*calculator.c * Chapter-8*/
#include <stdio.h>
#include <stdbool.h>

void buffer_flush(void);
void get_menu(void);
float get_numb(void);

int main(int argc, char const *argv[])
{
   float numb1, numb2;
   char user_menu;
   bool test = true;

    do
    {
        get_menu();
        printf("Enter the operation of your choice\n");
        if (scanf("%c", &user_menu) == 1)

        numb1 = get_numb();
        numb2 = get_numb();

        switch (user_menu)
          {
             case 'a' :

                        printf("%f + %f = %f\n", numb1, numb2, numb1 + numb2);
                        break;

             //case 's' : get_numbs();
                        break;

             //case 'm' : get_numbs();
                        break;

             //case 'd' : get_numbs() ;
                        break;

             //case 'q' : test = false;
                        break;

             //default  : buffer_flush();
                        //printf("Please enter appropriate choice from menu!\n");
                        //continue;
      }
      buffer_flush();

   } while(test);

printf("BYE!!\n");
  return 0;
}

void buffer_flush(void)
{
  while (getchar() != '\n')
  ;
}

void get_menu(void)
{
  printf("-----------------------------\n");
  printf("a. add         s. subtract\n");
  printf("m. multiply    d. divide\n");
  printf("           q. quit\n");
  printf("-----------------------------\n");
}

float get_numb(void)
{
  float temp_numb;
  printf("Please enter number: ");
  while (scanf("%f", &temp_numb) == 1);
  buffer_flush();
  return temp_numb;
}
