/* percentage.c -- get percentages based on scaled scores*/
/*by Carl Mannino cmannino@mac.com*/
#include <stdio.h>
#define SCALE 20
#define EXLO "Extermely Low"
#define BORD "Borderline"
#define LOAV "Low Average"
#define AVER "Average"
#define HIAV "High Average"
#define SUPE "Superior"
#define VESU "Very Superior"

int getScaScore(int scaledScore, int *sS, int count);
void getPercent(int scaledScore, int *sS, float const *pP, int count);

int main(int argc, char const *argv[])
{

int count = 0;
int scaledScore = 0;
int scaleS[SCALE];
const float percentages[SCALE] = {0.1,0.4,1,2,5,9,16,25,37,50,63,75,84,91,95,98,99,99.6,99.9};

printf("Enter Scaled Scores (x to quit) \n");
count = getScaScore(scaledScore, scaleS, count);
getPercent(scaledScore, scaleS, percentages, count);
} // end of main

int getScaScore(int scaledScore, int *sS, int count)
{
  int howMany = 0;
  while(scanf("%d", &scaledScore) != 0 && scaledScore > 0 && scaledScore < SCALE)
  {
    sS[howMany] = scaledScore;
    howMany++;
  }
  return howMany;
}

void getPercent(int scaledScore, int *sS, float const  *pP, int count)
{
  int c;
  int post;
  float x;
  printf("-------------------------------------------------\n");
  printf("Scaled Score\t  Percent\t    Descriptor\n");
  printf("-------------------------------------------------\n");
  for(c = 0; c < count; c++)
    {
        post = sS[c];
        x = pP[post-1];
        if(post > 0 && post < 4)
          printf("%5.1d     %13.1f%%      %20s\n", post, x, EXLO);
        if(post > 4 && post < 7)
          printf("%5.1d     %13.1f%%      %17s\n", post, x, BORD);
         if(post == 7)
          printf("%5.1d     %13.1f%%      %18s\n", post, x, LOAV);
         if(post > 7 && post < 13)
          printf("%5.1d     %13.1f%%      %14s\n", post, x, AVER);
         if(post == 13)
          printf("%5.1d     %13.1f%%      %19s\n", post, x, HIAV);
         if(post > 13 && post < 15)
          printf("%5.1d      %13.1f%%      %14s\n", post, x, SUPE);
         if( post > 14 && post < 20)
          printf("%5.1d      %13.1f%%      %19s\n", post, x, VESU);
     }
}
