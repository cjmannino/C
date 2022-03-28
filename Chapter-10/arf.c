/* arf.c -- array functions */
#include <stdio.h>
#define SIZE 5
void show_array(const double ar[], int n);
void multi_array(double ar[], int n, double mult);

int main(void)
{
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

    printf("The orignal dip array:\n");
    show_array(dip, SIZE);
    multi_array(dip, SIZE, 2.5);
    printf("The dip array after calling multi_array():\n");
    show_array(dip, SIZE);

    return 0;
}
/* displays array contents */
void show_array(const double ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
      printf("%8.3f ", ar[i]);
    putchar('\n');
}
/* multiplies each array member by the same multiplier */
void multi_array(double ar[], int n, double mult)
{
    int i;
    for (i = 0; i < n; i++)
      ar[i] *= mult; 
}
