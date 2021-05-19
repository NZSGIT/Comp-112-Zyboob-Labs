/* 
3.22 LAB: Interstate highway numbers
Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, and evens (like the 10 or 90) go east/west. Auxiliary highways are numbered 100-999, and service the primary highway indicated by the rightmost two digits. Thus, I-405 services I-5, and I-290 services I-90.

Given a highway number, indicate whether it is a primary or auxiliary highway. If auxiliary, indicate what primary highway it serves. Also indicate if the (primary) highway runs north/south or east/west.

Ex: If the input is:

90
the output is:

I-90 is primary, going east/west.
Ex: If the input is:

290
the output is:

I-290 is auxiliary, serving I-90, going east/west.
Ex: If the input is:

0
or any number not beween 1 and 999, the output is:

0 is not a valid interstate highway number. 
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {
   int highwayNumber;
   scanf("%d", &highwayNumber); 
   
   if (highwayNumber > 999 || highwayNumber < 1){
      printf("%d is not a valid interstate highway number.\n",highwayNumber );
      exit(0);
      }
   
   int highMain = highwayNumber;
  
   bool isodd = highwayNumber % 2;
   bool isaux =  highwayNumber > 99;
   
   if(isaux == 1){
      while (highMain > 100){
         highMain = highMain - 100;
         }
      }
   
   
   if (isaux == 0){
      
      if(isodd == 0)
      {
      printf("I-%d is primary, going east/west.\n", highwayNumber);
      }
      else
      {
         printf("I-%d is primary, going north/south.\n", highwayNumber);
      }
   }
   
   else if (isaux == 1){
      
      if(isodd == 0)
      {
         printf("I-%d is auxiliary, serving I-%d, going east/west.\n", highwayNumber, highMain);
      }
      else
      {
         printf("I-%d is auxiliary, serving I-%d, going north/south.\n", highwayNumber, highMain) ;
      }
      
   }   

   return 0;
}

