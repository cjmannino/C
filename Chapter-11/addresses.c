/* addresses.c -- addresses of strings CH 11 PG 446 */
#include <stdio.h>
#define MSG "I/m special."

int main()
{
    char ar[] = MSG;
    const char * pt = MSG;
    printf("Address of \"I'm special\": %p \n", "I'm special");
    printf("              address ar: %p\n", ar);
    printf("           address of pt: %p\n", pt);
    printf("           address of MSG: %p\n", MSG);
    printf("Address of \"I'm special\"  %p\n", "I'm special");
    printf("Using ptr to get (3)%c     \n", *(ar+5) );

    const char * ptc = "The Grateful Dead.";
    puts(ptc);
    return 0;
}
