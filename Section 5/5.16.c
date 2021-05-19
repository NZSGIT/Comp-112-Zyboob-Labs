/* 
5.16 LAB: Output numbers in reverse
Write a program that reads a list of integers, and outputs those integers in reverse. The input begins with an integer indicating the number of integers that follow. For coding simplicity, follow each output integer by a comma, including the last one. Assume that the list will always contain less than 20 integers.

Ex: If the input is:

5 2 4 6 8 10
the output is:

10,8,6,4,2,
To achieve the above, first read the integers into an array. Then output the array in reverse.
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int main(void) {
   int NUM_ELEMENTS = 0;
   scanf("%d", &NUM_ELEMENTS);

   int userVals[NUM_ELEMENTS];          

  for(int x = 0; x < NUM_ELEMENTS; x++){
     scanf("%d", &userVals[x]);
     }
  
   for(int x = NUM_ELEMENTS - 1; x >= 0; --x){    
      printf("%d,", userVals[x]);
   }
   printf("\n");
   
   return 0;
}
