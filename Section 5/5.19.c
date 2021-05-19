/* 
5.19 LAB: Adjust list by normalizing
When analyzing data sets, such as data for human heights or for human weights, a common step is to adjust the data. This can be done by normalizing to values between 0 and 1, or throwing away outliers.

For this program, adjust the values by dividing all values by the largest value. The input begins with an integer indicating the number of floating-point values that follow. Assume that the list will always contain less than 20 floating-point values.

For coding simplicity, follow every output value by a space, including the last one. And, output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf ", yourValue);

Ex: If the input is:

5 30.0 50.0 10.0 100.0 65.0
the output is:

0.30 0.50 0.10 1.00 0.65 
The 5 indicates that there are five floating-point values in the list, namely 30.0, 50.0, 10.0, 100.0, and 65.0. 100.0 is the largest value in the list, so each value is divided by 100.0.

For coding simplicity, follow every output value by a space, including the last one.
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int main(void) {

   int numVal = 0;
   scanf("%d", &numVal);
   double arrayVal[numVal];
   
   int highVal;
   
   for(int x = 0; x < numVal; ++x){
      scanf("%lf", &arrayVal[x]);
      if(x == 0){
         highVal = arrayVal[x];
         }
      else if(highVal < arrayVal[x]){
         highVal = arrayVal[x];
         }   
      }
   
   for(int x = 0; x < numVal; ++x){
      printf("%0.2lf ", arrayVal[x]/highVal);
      }
   
   printf("\n");
   return 0;
}
