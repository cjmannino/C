/* floatvalues.c -- my learning how to use modifiers. */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float first = 368.4526921;
    float second= 14.531;
    float hex = 138.23;
    int exhex = 0x8a;
    char next [30] = "This is a string of stupidity";

    printf("-----------------------------\n");
    printf("Print the float values without modifiers.\n");
    printf("Float First: %f\n", first);
    printf("Float second: %f\n", second);
    printf("-----------------------------\n");

    printf("Float first with %.3f\n",first);
    printf("Hex in field of four: %4.e\n", hex);
    printf("Hex Notion: %#4x\n", exhex);
    printf("-----------------------------\n");

    printf("String: %s\n", next);
    printf("String 8.8: %8.18s\n", next);


  return 0;
}
