/*do_while.c -- exit condition loop */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    const int secret_code =13;
    int code_entered;

    do
    {
        printf("To enter the truskaidekaphobia therapy club,\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! you are cured!\n");

  return 0;
}
