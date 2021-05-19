/* 
6.27 LAB: Convert to binary - functions
Write a program that takes in a positive integer as input, and outputs a string of 1's and 0's representing the integer in binary. For an integer x, the algorithm is:

As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2
Note: The above algorithm outputs the 0's and 1's in reverse order. You will need to write a second function to reverse the string.

Ex: If the input is:

6
the output is:

110
Your program must define and call the following two functions. The IntegerToReverseBinary function should assign binaryValue with a string of 1's and 0's representing the integerValue in binary (in reverse order). The ReverseString function should assign reversedString with the reverse of inputString.

void IntegerToReverseBinary(int integerValue, char binaryValue[])
void ReverseString(char inputString[], char reversedString[])
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <string.h>
#include <stdio.h>

void IntegerToReverseBinary(int integerValue, char binaryValue[]){
   
   /* As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2*/
   int x = 0;
   while (integerValue > 0){
      
      if(integerValue % 2 == 0){
         binaryValue[x] = '0'; 
         }
      else{
         binaryValue[x] = '1';
         }
      integerValue = integerValue / 2;
      ++x;
      
      }
   }

void ReverseString(char inputString[], char reversedString[]){
    
   for (int i = 0; i < strlen(inputString); ++i) {
      reversedString[i] = inputString[strlen(inputString) - 1 - i];
     
   }
}

int main(void) {
   
   int num;
   char numarray[100];

   scanf("%d", &num);
   
   IntegerToReverseBinary(num, numarray);
   
   char stringreverse[100];
   
   ReverseString(numarray, stringreverse);

   printf("%s\n", stringreverse);
   return 0;
}
