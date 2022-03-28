/* a bufferpractice.c -- practice with buffers and scanf and getchar*/
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void buffer_flush(void);
char display_menu(void);
float get_numbs(void);
char user_menu(void);

int main(int argc, char const *argv[])
{
	char user_menu;
	float numb1, numb2;
	bool evaluate = false;


		while ( (user_menu = display_menu()) != 'q')
			{
				numb1 = get_numbs();
				numb2 = get_numbs();

					switch(user_menu)
						{
								case 'a' :
				  								printf("\n%2.f + %2.f = %.2f\n", numb1, numb2, \
													numb1 + numb2);
				   								break;

							case 's' :
												printf("\n%2.f - %2.f = %.2f\n", numb1, numb2, \
													numb1 - numb2);
				   								break;

								case 'm' :
													printf("\n%2.f * %2.f = %.2f\n", numb1, numb2, \
											 			numb1 * numb2);
										       break;

							   case 'd' :
							    		     while (numb2 == 0)
													 {
														 printf("Can't divide by zero ");
														 printf("Please enter a number than zero\n");
														 numb2 = get_numbs();
													 }
													 printf("\n%2.f / %2.f = %.2f\n", numb1, numb2, \
														 numb1 / numb2);
							    		     break;

								case 'q' :
													evaluate = true;
													break;

							   default  :
							    		printf("Please enter a valid response!\n");
											buffer_flush();
							    		break;
							}//switch
				buffer_flush();
		}//end of while

	return 0;
}//main

void buffer_flush(void)
{
		while(getchar() != '\n')
		;

}

char display_menu(void) // this function does not work right
{
	int ch;
	printf("***********************************\n");
	printf("a. add			s. subtract\n");
	printf("m. multiple 		d. division\n");
	printf("		q. quit\n");
	printf("***********************************\n");
	ch = user_menu();
	return ch;

}

char user_menu(void)
{
	int ch;
	printf("Enter the letter of your choice\n");
	ch = getchar();


			while (ch != 'a' && ch != 's' && ch !='m' && ch != 'd' && ch != 'q')
			{
					putchar(ch);
					//buffer_flush();
					printf(" <is not valid option\n");
					printf("Please enter a, s, m, d, or q to quit:");
					ch = getchar();
			}

return ch;
}

float get_numbs(void)
{
			float temp_numb;
			int ch;

			printf("Number:> ");

			while (scanf("%f", &temp_numb) != 1)
			{
							ch = getchar();
							putchar(ch);
							printf(" that is not a number.");
							printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
							buffer_flush();

				}

			return temp_numb;
}
