/*myFgets.c -- practice using the fgets & fputs functions Chapter 11*/
#include <stdio.h>
#define STRLEN 25

int main(void)
{
    char user_input[STRLEN];
    printf("Please enter a string: ");
    while (fgets(user_input, STRLEN, stdin)!= NULL && user_input[0] != '\n')
    //gets(user_input, STRLEN, stdin);
    fputs(user_input, stdout);
    puts("\nDone!");

    return 0;
}
