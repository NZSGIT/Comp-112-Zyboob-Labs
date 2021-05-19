/* 
6.36 LAB: Warm up: Text analyzer & modifier
(1) Prompt the user to enter a string of their choosing, assuming a 50 character maximum. Output the string. (1 pt)

Ex:

Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.
(2) Complete the GetNumOfCharacters() function, which returns the number of characters in the user's string. Make sure to count the trailing newline character if applicable. We encourage you to use a for loop in this function. (2 pts)

(3) In main(), call the GetNumOfCharacters() function and then output the returned result. (1 pt)

(4) Implement the OutputWithoutWhitespace() function. OutputWithoutWhitespace() outputs the string's characters except for whitespace (spaces, tabs). Note: A tab is '\t'. Call the OutputWithoutWhitespace() function in main(). (2 pts)

Ex:

Enter a sentence or phrase:
The only thing we have to fear is fear itself.

You entered: The only thing we have to fear is fear itself.

Number of characters: 47
String with no whitespace: Theonlythingwehavetofearisfearitself.
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below


#include<stdio.h>
#include <string.h>

//Returns the number of characters in usrStr
int GetNumOfCharacters(const char usrStr[]) {
   int tempVal = 1;
   
   for(int i = 0; i < strlen(usrStr); ++i){
      if(usrStr[i] != '\0'){
         tempVal+=1;
      }
   }
    return tempVal;  
} 

const char* OutputWithoutWhitespace(const char usrStr[]){
    int x = 0;
    char newstring[50];
    for(int i = 0; i < strlen(usrStr); ++i){
       if(usrStr[i] != ' '){
          
          newstring[x] = usrStr[i];
          printf("%c", newstring[x] );
          x += 1;
          } 
       }
   
   //return newstring;
   }

int main(void) {
char testArray[50];
  
  printf("Enter a sentence or phrase:\n");
  
  fgets(testArray, 50, stdin);
  
  printf("%d\n", GetNumOfCharacters(testArray));
  printf("%s", OutputWithoutWhitespace(testArray));
  
 
  
}
