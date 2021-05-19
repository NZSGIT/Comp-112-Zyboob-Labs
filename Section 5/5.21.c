/* 
5.21 LAB: Contains the character
Write a program that reads an integer, a list of words, and a character. The integer signifies how many words are in the list. The output of the program is every word in the list that contains the character at least once. For coding simplicity, follow each output word by a comma, even the last one. Assume at least one word in the list will contain the given character. Assume that the list will always contain less than 20 words. Each word will always contain less than 10 characters and no spaces.

Ex: If the input is:

4 hello zoo sleep drizzle z
then the output is:

zoo,drizzle,
To achieve the above, first read the list into an array. Keep in mind that the character 'a' is not equal to the character 'A'.

Hint: To read in the character after the final word, add a space before %c: scanf(" %c", &searchCharacter);
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>
#include <string.h>

int main(void) {

   int numVal;
   scanf("%d", &numVal);
   
   char array[numVal][20];
   char match;
   
   for(int x = 0; x < numVal; ++x){
      scanf("%s", array[x]);
      }
      
   
   scanf(" %c", &match);
   int ghettoBool;
   
   
  for(int x = 0; x < numVal; ++x){
     int ghettoBool = 0;
     for(int y = 0; y < strlen(array[x]); ++y){
      if(array[x][y] == match && ghettoBool == 0){
         printf("%s,",array[x]);
         ghettoBool = 1;}
       
      
             }
     
  }
     
   return 0;
}


