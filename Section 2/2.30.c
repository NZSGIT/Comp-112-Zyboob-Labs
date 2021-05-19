/* 
2.30 LAB: Using math functions
Given three floating-point numbers x, y, and z, output x to the power of z, x to the power of (y to the power of 2), the absolute value of y, and the square root of (xy to the power of z).

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);

Ex: If the input is:

5.0 6.5 3.2
the output is:

172.47 340002948455826440449068892160.00 6.50 262.43
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>
#include <math.h>
int main(void) {
   
   double x;
   double y;
   double z;

   scanf("%lf", &x);
   scanf("%lf", &y);
   scanf("%lf", &z);
   
   double a = pow(x, z);
   double b = pow(x, pow(y, 2.0));
   double c = fabs(y);
   double d = sqrt(pow(x*y, z));
   
   printf("%0.2f ", a);
   printf("%0.2f ", b);
   printf("%0.2f ", c);
   printf("%0.2f\n", d);

   return 0;
}

