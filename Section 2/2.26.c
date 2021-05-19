/* 
2.26 LAB: Caffeine levels
A half-life is the amount of time it takes for a substance or entity to fall to half its original value. Caffeine has a half-life of about 6 hours in humans. Given caffeine amount (in mg) as input, output the caffeine level after 6, 12, and 24 hours.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);

Ex: If the input is:

100
the output is:

After 6 hours: 50.00 mg
After 12 hours: 25.00 mg
After 24 hours: 6.25 mg
Note: A cup of coffee has about 100 mg. A soda has about 40 mg. An "energy" drink (a misnomer) has between 100 mg and 200 mg.
*/



/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int main(void) {
   double caffeineMg;  // "double" supports floating-point like 75.5, versus int for integers like 75.
   
   scanf("%lf", &caffeineMg);

   printf("After 6 hours: %0.2lf mg\n", caffeineMg/2);
   printf("After 12 hours: %0.2lf mg\n", caffeineMg*.25);
   printf("After 24 hours: %0.2lf mg\n", caffeineMg*.0625);
   
   return 0;
}
