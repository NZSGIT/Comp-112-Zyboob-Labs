/* 
4.20 Question #1
Many user-created passwords are simple and easy to guess. Write a program that takes a simple password and makes it stronger by replacing characters using the key below, and by appending "!" to the end of the input string. You may assume that the string does not contain spaces and will always contain less than 50 characters.

i becomes 1
a becomes @
m becomes M
B becomes 8
s becomes $
Ex: If the input is:

mypassword
the output is:

Myp@$$word!
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>
#include <string.h>

int main(void) {

   int numVal = 50;
   char array[numVal];
   
   scanf("%s", array);
   
   for(int x = 0; x < strlen(array); ++x){
      
      if(array[x] == 'i'){
         array[x] = '1';
         }
      
      else if(array[x] == 'a'){
        array[x] =  '@';
         }
      
      else if(array[x] == 'm'){
         array[x] = 'M';
         }
      
      else if(array[x] == 'B'){
         array[x] = '8';
         }
      
      else if(array[x] == 's'){
         array[x] = '$';
         }
      
      }
      
       printf("%s!\n", array);

   return 0;
}
