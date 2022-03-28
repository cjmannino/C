/* heightconv.c  -- converts inches to feet */
#include <stdio.h>
# define INCHES 12

int main(int argc, char const *argv[])
{
    float userHeight;
    float convHeight;
    char userName[30];

    printf("Hello! Please enter your first name:");
    scanf("%s", userName);

    printf("Please enter how tall you are in inches:");
    scanf("%f", &userHeight);

    convHeight = userHeight / INCHES;
    printf("\n%s you are %1.2F feet tall\n", userName, convHeight);


  return 0;
}
