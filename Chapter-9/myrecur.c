/* myrecur.c -- a simple program to play with function recursion */

 #include <stdio.h>

 void for_recur(int);

 int main(void)
 {
   int x;
   for_recur(1);
   printf("\n");
   for_recur(4 / 2);

   printf(">:");
   while (scanf("%i",&x) == 1)
   for_recur(x);

   return 0;
 }

 void for_recur(int n)
 {
    printf("F time around: %i \n", n);
    if (n < 5)
      for_recur(n+1);
    printf("S time around: %i \n", n);
 }
