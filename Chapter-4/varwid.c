/* varwid.c -- uses variable-width output field */
#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width: \n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number);
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");

    int exwidth = 9;
    printf("%*.*f\n", exwidth, weight);

  return 0;
}
