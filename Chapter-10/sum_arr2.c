/*sum_arr2.c -- sums the elements of an array */
#include <stdio.h>
#define SIZE 10

int sump(int * start, int * end);

int main(void)
{
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;

    answer = sump(marbles, marbles + SIZE);
    printf("The Total number of marbles is %li.\n", answer);

  return 0;

}

/* use pointer arithmetic */
int sump(int * start, int * end)
{
    int total = 0;

    while (start < end)
    {
        total += *(start++); //add value to Total

        //condense to // total += *start++;
    }
    return total;
}
//++ applies to start, not to *start (associates left to right)
//pointer is incremented not the value to pointed to.
//postfix is not incremented until after the pointed to value is added.
//page 406. 
