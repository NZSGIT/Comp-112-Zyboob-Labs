/* 
6.22 LAB: Swapping variables
Write a program whose input is two integers and whose output is the two integers swapped.

Ex: If the input is:

3 8
then the output is:

8 3
Your program must define and call a function. SwapValues returns the two values in swapped order.
void SwapValues(int* userVal1, int* userVal2)

*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

void SwapValues(int* userVal1, int* userVal2){
   
   int temp1 = *userVal1;
   int temp2 = *userVal2;
   
   *userVal1 = temp2;
   *userVal2 = temp1;
   }



int main(void) {
   int userint1;
   int userint2;
   
   scanf("%d", &userint1);
   scanf("%d", &userint2);
   SwapValues(&userint1, &userint2);
   printf("%d %d\n",userint1, userint2 );

   return 0;
}
