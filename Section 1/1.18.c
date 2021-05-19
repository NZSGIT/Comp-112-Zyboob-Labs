/*
Given two input integers for an arrow body and arrowhead (respectively), print a right-facing arrow.

Ex: If the input is:

0 1
the output is:

    1
    11
0000111
00001111
0000111
    11
    1
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int main(void) {
   int baseInt;
   int headInt;
   
   scanf("%d", &baseInt);
   scanf("%d", &headInt);
   
   printf("    %d\n",headInt);
   printf("    %d%d\n",headInt, headInt);
   printf("%d%d%d%d%d%d%d\n",baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt);
   printf("%d%d%d%d%d%d%d%d\n",baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt, headInt);
   printf("%d%d%d%d%d%d%d\n",baseInt, baseInt, baseInt, baseInt, headInt, headInt, headInt);
   printf("    %d%d\n",headInt, headInt);
   printf("    %d\n",headInt);
   

   return 0;
}









