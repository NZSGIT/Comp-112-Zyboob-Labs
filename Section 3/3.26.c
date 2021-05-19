/* 
3.26 LAB: Warm up: Automobile service cost
(1) Prompt the user for an automobile service. Each service type is composed of two strings. Output the user's input. (1 pt)

Ex:

Enter desired auto service:
Oil change
You entered: Oil change

(2) Output the price of the requested service. (4 pts)

Ex:

Enter desired auto service:
Oil change
You entered: Oil change
Cost of oil change: $35

The program should support the following services:

Oil change -- $35
Tire rotation -- $19
Car wash -- $7
If the user enters a service that is not listed above, then output the following error message:

*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>
#include <string.h>
// FIXME include the string library

int main(void) {

 char autoService[20];
 char autoService2[20];

 printf("Enter desired auto service:\n");

  scanf("%s %s", autoService, autoService);
  printf("You entered: %s ", autoService);
  printf("%s\n", autoService2);
 
 if (!strcmp(autoService, "Oil") && !strcmp(autoService2, "change")){
      printf("Cost of oil change: $35\n");
    }

   else if (!strcmp(autoService, "Tire") && !strcmp(autoService2, "rotation")){
      printf("Cost of tire rotation: $19\n");
    
    }

   else if (!strcmp(autoService,"Car") && !strcmp(autoService2, "wash")){
    printf("Cost of car wash: $7\n");
    
    }

   else{
      printf("Error: Requested service is not recognized\n");
      
      
      }

   return 0;
}
