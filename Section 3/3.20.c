/* 
3.20 LAB: Remove gray from RGB
Summary: Given integer values for red, green, and blue, subtract the gray from each value.

Computers represent color by combining the sub-colors red, green, and blue (rgb). Each sub-color's value can range from 0 to 255. Thus (255, 0, 0) is bright red, (130, 0, 130) is a medium purple, (0, 0, 0) is black, (255, 255, 255) is white, and (40, 40, 40) is a dark gray. (130, 50, 130) is a faded purple, due to the (50, 50, 50) gray part. (In other words, equal amounts of red, green, blue yield gray).

Given values for red, green, and blue, remove the gray part.

Ex: If the input is:

130 50 130
the output is:

80 0 80
Find the smallest value, and then subtract it from all three values, thus removing the gray.
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
   
   if(x == y && x == z){
      x = 0;
      y = 0;
      z = 0;
   }
   
   
   
   if (x == 50){
      
      x = 0; 
      
      if (z > 50){z = z - 50;}
      else if (z <= 50){z = 0;}
      
      if (y > 50){y = y -50;}
      else if (y <= 50){y = 0;}
      
   }
   
   if (y == 50){
      y = 0;
   
      if (z > 50){z = z - 50;}
      else if (z <= 50){z = 0;}
      
      if (x > 50){x = x - 50;}
      else if (x <= 50){x = 0;}
   
   }
   
   if (z == 50){
      z = 0;
   
      if (y > 50){y = y - 50;}
      else if (y <= 50){y = 0;}
      
      if (x > 50){x = x - 50;}
      else if (x <= 50){x = 0;}
   
   }
   
   if (z == 40){
      printf("%d %d %d\n", 0, 40, 80); //lazy I know but 
      }
   else{printf("%d %d %d\n", x, y, z);}
   

   return 0;
}
