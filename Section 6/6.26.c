/* 
6.26 LAB: Remove spaces - functions
Write a program that removes all spaces from the given input. You may assume that the input string will not exceed 50 characters.

Ex: If the input is:

Hello my name is John.
the output is:

HellomynameisJohn.
Your program must define and call the following function. userString is the user specified string. The function assigns userStringNoSpaces with the user specified string without spaces.
void RemoveSpaces(char userString[], char userStringNoSpaces[])
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void RemoveSpaces(char userString[], char nospace[]){
   
   int y = 0;
   
   for(int x = 0; x < 30; ++x){
      
      if (!isspace(userString[x]) || userString[x] == '\n' ){
         nospace[y] = userString[x];
         y++;
         
         }
      
      }
}

int main(void) {

   char array[50];
   char arraynospace[50];
   
   fgets(array, 50, stdin);
   
   
   RemoveSpaces(array, arraynospace);
   
   printf("%s\n", arraynospace);

   return 0;
}


