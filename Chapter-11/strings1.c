/*strings1.c*/
#include <stdio.h>
#define MSG "I am a symbolic string constant."
#define MAXLENGTH 81

int main (void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * p1 = "Something is point at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(p1);
    words[8] = 'p';
    puts(words);

    return 0;

}
