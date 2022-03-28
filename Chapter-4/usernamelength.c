/* usernamelength.c -- ask for name and print formated length */

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
 {
    char firstName[10];
    char secondName[20];

    printf("Please enter your first name: ");
    scanf("%s", firstName);
    printf("Please enter your last name: ");
    scanf("%s", secondName);

    printf("%s\t%s\n", firstName, secondName);
    printf("%zd\t%zd\n", strlen(firstName), strlen(secondName));

  return 0;
}
