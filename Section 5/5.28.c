/* 
5.28 LAB: Palindrome
A palindrome is a word or a phrase that is the same when read both forward and backward. Examples are: "bob," "sees," or "never odd or even" (ignoring spaces). Write a program whose input is a word or phrase, and that outputs whether the input is a palindrome. You may assume that the input string will not exceed 50 characters.

Ex: If the input is bob, the output is:

palindrome: bob
Ex: If the input is bobby, the output is:

not a palindrome: bobby
Hint: Start by just handling single-word input, and submit for grading. Once passing single-word test cases, extend the program to handle phrases. If the input is a phrase, remove or ignore spaces.
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>
#include <string.h>
int main(void) {
   char temparray[50], array[50], array2[50];;
   fgets(temparray, 50, stdin);
  int b = 0, j=0;
  for(int x = 0; x < strlen(temparray); ++x){
     if (!isspace(temparray[x])){
         array[b] = temparray[x];
         b++;  }}  
   for(int x = strlen(array) -1; x >= 0; --x){    
      if (!isspace(array[x])){
         array2[j] = array[x]; 
         ++j; }}
   if(!strcmp(array, array2)){
      printf("palindrome: %s\n", temparray);}
   else{
      printf("not a palindrome: %s\n", temparray);}
   return 0;}
