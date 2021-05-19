/* 
6.28 LAB: Max and min numbers
Write a program whose inputs are three integers, and whose outputs are the largest of the three values and the smallest of the three values.

Ex: If the input is:

7 15 3
the output is:

largest: 15 
smallest: 3
Your program must define and call the following two functions. The LargestNumber function should return the largest number of the three input values. The SmallestNumber function should return the smallest number of the three input values.
int LargestNumber(int userNum1, int userNum2, int userNum3)
int SmallestNumber(int userNum1, int userNum2, int userNum3)

*/

/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int LargestNumber(int userNum1, int userNum2, int userNum3){
   
   int test[3] = {userNum1, userNum2, userNum3};
   int LargestNum = userNum1;
   
   for(int o = 0; o < 3; ++o){
      if (test[o] > LargestNum){
         LargestNum = test[o];
         
         }
      }
   return LargestNum;
   
   }


int SmallestNumber(int userNum1, int userNum2, int userNum3){
   
   int test[3] = {userNum1, userNum2, userNum3};
   int SmallestNum = userNum1;
   
   for(int o = 0; o < 3; ++o){
      if (test[o] < SmallestNum){
         SmallestNum = test[o];
   
         }
      }
   return SmallestNum;
   
   }


int main(void) {

   int num1, num2, num3;

   scanf("%d", &num1);
   scanf("%d", &num2);
   scanf("%d", &num3);
   
   printf("largest: %d\n", LargestNumber(num1, num2, num3));
   printf("smallest: %d\n", SmallestNumber(num1, num2, num3));
   
   
   
   return 0;
}

