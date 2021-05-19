/* 
5.23 Midterm Question #2
Write a program that first gets a list of integers from input. The input begins with an integer indicating the number of integers that follow. Assume that the list will always contain less than 20 integers.

That list is followed by two more integers representing lower and upper bounds of a range. Your program should output all integers from the list that are within that range (inclusive of the bounds). For coding simplicity, follow each output integer by a comma, even the last one. The output ends with a newline.

Ex: If the input is:

5 25 51 0 200 33
0 50
then the output is:

25,0,33,             
(the bounds are 0-50, so 51 and 200 are out of range and thus not output).
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int main(void) {
   int numVal;
   scanf("%d", &numVal);
   int array[numVal];
   
   for(int x = 0; x < numVal; ++x){
      scanf("%d", &array[x]);
      }
  
   int min;
   int max;
  
   scanf("%d", &min);
   scanf("%d", &max);
   
   for(int x = 0; x < numVal; ++x){
      if(array[x] >= min &&  array[x] <= max){
         printf("%d,", array[x]);
         }
   }
   printf("\n");
  
   return 0;
}
