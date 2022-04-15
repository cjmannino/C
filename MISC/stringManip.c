/* ustriningManip.c */
#include <stdio.h>
#include <string.h>
#define ROWS 5
#define LENGTH 50

void prinMenu(void);
void getUserStrin(char (*str)[LENGTH], int n);
void dispStri(char ustrin[][LENGTH], int n);
void sortASCII(char ustrin[][LENGTH], int n);

int main(int argc, char const *argv[])
 {
  char ustrin[ROWS][LENGTH];
  char ptrStri[ROWS][LENGTH];
  char * pASCII[LENGTH];
  char ch;

  getUserStrin(ustrin, ROWS);
  prinMenu();

while((ch = getchar()) != 'q')
{
  switch(ch)
  {
        case 'a' :
          dispStri(ustrin, ROWS);
          prinMenu();
          break;
        case 'b' :
          sortASCII(ustrin, ROWS);
          prinMenu();
          break;
        case 'c' :
          puts("First word sort");
          prinMenu();
          break;
        case 'd' :
          puts("Sort from size");
          prinMenu();
          break;
        case 'q' :
          puts("BYE!!");
          break;
        default :
          puts("Enter a letter (q to quit)");
    }//end of switch
    while((ch = getchar()) !='\n')
      continue;
}

  return 0;
}//end of main

void getUserStrin(char (*str)[LENGTH], int n)
{
  int s;
  for (s = 0; s < n; s++)
  {
    printf("Please enter string%d >: ", s);
    fgets(*(str+s), LENGTH, stdin);
  }
}

void dispStri(char ustrin[][LENGTH], int n)
{
puts("Display strings");
puts("");
  int x,c;
    for (c = 0; c < n; c++)
      printf("%s", ustrin[c]); // why does this work
}

void prinMenu(void)
{

  printf("****************************************************************\n");
  printf("* (a) display strings       (b) sort strings by ASCII sequence *\n");
  printf("* (c) sort by first word    (d) sort by size                   *\n");
  printf("*                       (q) to quit                            *\n");
  printf("****************************************************************\n");
  printf("Enter letter of function ( q to quit)\n");

}

void sortASCII(char ustrin[][LENGTH], int n)//change to use pointer leaving orignal array alone
{
  puts("ACSII Sort");
  puts("");
  char temp[LENGTH];
  
  int x, t, s;
  for(int i = 0; i < n; i++)
  {
    for (int j = 0; j < n-1-i; j++)
    {
      if(strcmp(ustrin[j], ustrin[j+1]) > 0)
      {
        strcpy(temp, ustrin[j]);
        strcpy(ustrin[j], ustrin[j+1]);
        strcpy(ustrin[j+1], temp);
      }
    }
  }
for (x = 0; x < ROWS; x++)
  printf("%s", ustrin[x]);

} // end of sortASCII
