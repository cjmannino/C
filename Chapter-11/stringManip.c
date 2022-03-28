/* stringManip.c -- a program to read in 10 strings and display them
(user choice) EX 11 PG.510 */
#include<stdio.h>
#include<string.h>
#define MAX 50
#define ROWS 6

void dispStri(char (*ustr)[MAX], int n);
void dispMenu(void);
void dispSortASCI(char *uStrings[], int n);


int main(int argc, char const *argv[])
{
  int x;
  char ch;

  char uStrings[ROWS][MAX];
  char *strp[ROWS];

  for(x = 0; x < ROWS; x++)
  {
    printf("Enter string%d>: \n", x);
    fgets(uStrings[x], MAX, stdin);
  }

  printf("Please enter the letter to function you would like: \n");

  do
  {
    printf("****************************************************************\n");
    printf("* (a) display strings       (b) sort strings by ASCII sequence *\n");
    printf("* (c) sort by first word    (d) sort by size                   *\n");
    printf("*                       (q) to quit                            *\n");
    printf("****************************************************************\n");

    switch(ch)
    {
      do
      {

      case 'a' :
        dispStri(uStrings, ROWS);
        break;
      case 'b' :
        dispSortASCI(strp, ROWS);
        break;
      case 'c' :
        puts("First word sort");
        break;
      case 'd' :
        puts("Sort from size");
        break;
      case 'q' :
        puts("BYE!!");
        break;
      default :
        puts("Enter a letter please (q to quit)");
      }//end of switch

}while((ch = getchar()) != 'q');


  return 0;
}

void dispStri(char (*ustr)[MAX], int n)
{
  int x;
  for(x = 0; x < n; x++)
  {
    printf("%s", *(ustr + x) );
  }
  puts("");
}

void dispSortASCI(char *uStrings[], int n)
{
  char *sortString[ROWS];

  puts("ASCII Sort");
  int t,s,x,y;
  char * temp;

  for (t = 0; t < n-1; t++)
    for (s = t + 1; s < n; s++)
    {
      if (strcmp(uStrings[t], uStrings[s]) > 0)
      {
        temp = uStrings[t];
        uStrings[t] = uStrings[s];
        uStrings[s] = temp;
      }
    }
      for (x = 0; x < n; x++)
        printf("%s\n", uStrings[x]);
  }
