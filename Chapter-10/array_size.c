/* array_size.c*/
#include <stdio.h>
#define SIZE 5

int main(void)
{
    const float money[SIZE] = {123.21, 456.34, 564.12, 674.12, 678.45};
    const int days[SIZE] = {1,2,3,4,5};

    printf("days %lu\n", sizeof days / sizeof days[0]);
    printf("money %.2lu\n", sizeof money / sizeof money[1]);

    printf("%i days\n", *(days + 2));
    printf("%.2f money\n", *(money + 1));

    return 0; 
}
