/* 
5.18 LAB: Output values below an amount
Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. Then, get the last value from the input, which indicates a threshold. Output all integers less than or equal to that last threshold value. Assume that the list will always contain less than 20 integers.

Ex: If the input is:

5 50 60 140 200 75 100
the output is:

50,60,75,
The 5 indicates that there are five integers in the list, namely 50, 60, 140, 200, and 75. The 100 indicates that the program should output all integers less than or equal to 100, so the program outputs 50, 60, and 75.

For coding simplicity, follow every output value by a comma, including the last one.

Such functionality is common on sites like A
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int main(void) {
   int NUM_ELEMENTS = 0;
   scanf("%d", &NUM_ELEMENTS);
   int userValues[NUM_ELEMENTS];
   int lastValue = 0;
   
   for(int x = 0; x < NUM_ELEMENTS; ++x){
      scanf("%d", &userValues[x]);
      }
   
   scanf("%d", &lastValue);
   
   
   for(int x = 0; x < NUM_ELEMENTS; ++x){
      if(userValues[x] < lastValue){  
         printf("%d,", userValues[x]);
   } 
      }
   printf("\n");
   
  return 0;
}
