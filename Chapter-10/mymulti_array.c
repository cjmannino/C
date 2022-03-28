/*mymulti_array.c -- practice with multi-dimensional arrays & pointers */
#include <stdio.h>

int main(void)
{
    int numbs[2][2] = { {10,15},
                        {21,36} };
    int x;

    printf("Print the array values\n");
    printf("Value of numbs[0][0] = %i | Address: %p\n", numbs[0][0], &numbs[0][0]);
    printf("Value of numbs[0][1] = %i | Address: %p\n", numbs[0][1], &numbs[0][1]);
    printf("Value of numbs[1][0] = %i | Address: %p\n", numbs[1][0], &numbs[1][0]);
    printf("Value of numbs[1][1] = %i | Address: %p\n", numbs[1][1], &numbs[1][1]);

    for(x = 0; x < 4; x++)
      printf("%i Address: %p \n", *(*numbs + x), &numbs + x );
    puts("");
    printf("Address of numb[0][0] %p\n", &numbs[0][0]);
    printf("Address of *(numbs + 0) %p: \n", *(numbs));
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    puts("");
    printf("Value of numbs[0][1] = %i | Address: %p\n", numbs[0][1], &numbs[0][1]);
    printf("Address: %p Value: %i\n", *(numbs + 1), *(*numbs + 1) );
    puts("");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("Address of numbs                %p\n", &numbs);
    printf("Address of numbs[0]             %p\n", &numbs[0]);
    printf("Address of numbs[0][0]          %p\n", &numbs[0][0]);
    printf("Address of *numbs               %p\n", *numbs);
    printf("Address of *(numbs)             %p\n", *(numbs));
    puts("");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("Address of *(numbs[0])          %p\n", &(numbs[1]) + 1);
    printf("Value of *(numbs[0])            %d\n", *(numbs[0]) );
    printf("Value of *(*(numbs + 1))        %d\n", *(*(numbs + 1)) );
    printf("value of numbs [1][1]           %d\n", *(*(numbs + 1) + 1) );
    printf("Value of *(*numbs + 1)           %d\n", *(*numbs + 1) );


  return 0;
}
// note that the address of numbs[0][0] is the same as *(numbs + 0);
// note numbs[0][1] is not same as *(*numbs + 1) by pointer it is by reference
//type, and in this example by int (4 bytes)
