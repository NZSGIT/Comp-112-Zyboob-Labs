/* 
5.20 LAB: Word frequencies
Write a program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow. Assume that the list will always contain fewer than 20 words.

Ex: If the input is:

5 hey hi Mark hi mark
the output is:

hey - 1
hi - 2
Mark - 1
hi - 2
mark - 1
Hint: Use two arrays, one array for the strings and one array for the frequencies.
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>
#include <string.h>

int main(void) {

   int numVal;
   scanf("%d", &numVal);
   char array[numVal][20];
   
   int amtRepeat;
  
   for(int x = 0; x < numVal; ++x){
      scanf("%s", array[x]);
      }
      
   for(int x = 0; x < numVal; ++x){
      amtRepeat = 0;
      for(int y = 0; y < numVal; ++y){
         if(!strcmp(array[x], array[y])){
            amtRepeat += 1;
            }
      }
      printf("%s - %d\n",array[x], amtRepeat);
   }
      

   return 0;
}
