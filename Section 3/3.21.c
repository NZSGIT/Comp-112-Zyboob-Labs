/* 
3.21 LAB: Smallest number
Write a program whose inputs are three integers, and whose output is the smallest of the three values.

Ex: If the input is:

7 15 3
the output is:

3
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int main(void) {

   int x;
   int y;
   int z;
   scanf("%d", &x);
   scanf("%d", &y);
   scanf("%d", &z);
   
   
   if ((x < y) && (x < z)){
      printf("%d\n", x);
      
      } 
      else if  (y < x && y < z){
      printf("%d\n", y);
      
      } 
      else if (z <= x && z <= y){
      printf("%d\n", z);
      } 
   
   
   
   return 0;
}

