/*numbs2.c -- pointer to multidimensonal arrays */
#include <stdio.h>
#define ROWS 4
#define COLS 5
float sum2d(const float numbs[][COLS], int rows);
void index_sum(const float numbs[][COLS], int rows);
void print_array(const float numbs[][COLS], int rows);

int main(int argc, char const *argv[])
{
    float sum;
    float (*fptr)[5];


    float numbs[ROWS][COLS] =
    {
          {89.23, 98.91, 92.45, 99.21, 98.89},
          {78.23, 89.45, 78.56, 89.38, 89.34},
          {45.56, 67.23, 72.12, 67.32, 45.23},
          {95.12, 99.34, 99.45, 98.12, 99.98}
    };
/*
    printf("Before function call\n");
    printf("%.2f   ", *(*(numbs+1) + 2) );
    printf("%p\n", &*(*(numbs+1) + 2) );
    printf("%p\n", &numbs[1][2]);

    fptr = numbs;
    printf("%.2f\n", *(*(fptr+1) + 2) );
    printf("%.2f\n", fptr[3][4]);
*/

    print_array(numbs, ROWS);
    index_sum(numbs, ROWS);
    sum = sum2d(numbs, ROWS);
    printf("The total of all elements: %.2f\n",sum);
    printf("The average of all elements: %.2f\n",sum / 20);


return 0;
}
// print one array at a time, with total & average
// then print summary of whole multidimensonal array

void print_array(const float numbs[][COLS], int rows)
{
    int r, c;
    float value;

    for (r = 0; r < rows; r++)
    {
          for (c = 0; c < COLS; c++)
          printf("numbs[%i][%i]= %.2f\n", r, c, numbs[r][c]);
        puts("");
    }
    puts("");
}

void index_sum(const float numbs[][COLS], int rows)
{

    int r, c;
    float total = 0;

    for (r = 0; r < rows; r++)
    {
          for (c = 0; c < COLS; c++)
          total += numbs[r][c];
          printf("numbs[%i]->[%i]= %.2f\n", r, c, total);
          total = 0;
    }

}

float sum2d(const float numbs[][COLS], int rows)
{
    int r, c;
    float total = 0;
    float average = 0;
    for (r = 0; r < rows; r++)
        for (c = 0; c < COLS; c++)
    total += numbs[r][c];
    //printf("Average: %.2f\n", total / 20);

    return total;
}
