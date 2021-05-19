/* 
5.29 LAB: Warm up: People's weights
Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);

(1) Prompt the user to enter five numbers, being five people's weights. Store the numbers in an array of doubles. Output the array's numbers on one line, each number followed by one space. (2 pts)

Ex:

Enter weight 1:
236.0
Enter weight 2:
89.5
Enter weight 3:
142.0
Enter weight 4:
166.3
Enter weight 5:
93.0
You entered: 236.00 89.50 142.00 166.30 93.00
(2) Also output the total weight, by summing the array's elements. (1 pt)

(3) Also output the average of the array's elements. (1 pt)

(4) Also output the max array element. (2 pts)


Ex:

Enter weight 1:
236.0
Enter weight 2:
89.5
Enter weight 3:
142.0
Enter weight 4:
166.3
Enter weight 5:
93.0
You entered: 236.00 89.50 142.00 166.30 93.00 

Total weight: 726.80
Average weight: 145.36
Max weight: 236.00
Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int main(void) {

   double weight1;
   double weight2;
   double weight3;
   double weight4;
   double weight5;

   double TotalWeight = 0;
   
   int ArraySize = 5;
  
   printf("Enter weight 1:\n");
   scanf("%lf", &weight1);
   double MaxWeight = weight1; 
  
   printf("Enter weight 2:\n");
   scanf("%lf", &weight2);
   
   printf("Enter weight 3:\n");
   scanf("%lf", &weight3);
   
   printf("Enter weight 4:\n");
   scanf("%lf", &weight4);
   
   printf("Enter weight 5:\n");
   scanf("%lf", &weight5);

   
   double array[] = {weight1, weight2, weight3, weight4, weight5};
   
   
   printf("You entered: ");
   
   for(int x = 0; x < ArraySize; ++x){
      
      printf("%0.2lf ", array[x]);
      TotalWeight += array[x];
         
      
      if(MaxWeight < array[x]){
         MaxWeight = array[x];
         
         }
      
      
      }
   
   
   
   printf("\n\nTotal weight: %0.2lf\n", TotalWeight);
   printf("Average weight: %0.2lf\n" , TotalWeight/ArraySize);
   printf("Max weight: %0.2lf\n", MaxWeight);


   return 0;
}

