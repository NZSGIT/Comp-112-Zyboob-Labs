/* 
6.32 LAB: Even/odd values in an array
Write a program that reads a list of integers, and outputs whether the list contains all even numbers, odd numbers, or neither. The input begins with an integer indicating the number of integers in the list. The first integer is not in the list. Assume that the list will always contain less than 20 integers.

Ex: If the input is:

5 2 4 6 8 10
the output is:

all even
Ex: If the input is:

5 1 -3 5 -7 9
the output is:

all odd
Ex: If the input is:

5 1 2 3 4 5
the output is:

not even or odd
Your program must define and call the following two functions. IsArrayEven returns true if all integers in the array are even and false otherwise. IsArrayOdd returns true if all integers in the array are odd and false otherwise.
bool IsArrayEven(int inputVals[], int numVals)
bool IsArrayOdd(int inputVals[], int numVals)
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>
#include <stdbool.h>




bool IsArrayEven(int inputVals[], int numVals) {
   bool Even = 1;
   for (int i = 0; i < numVals; i++) {
      if (inputVals[i] % 2 == 0){}
      
      else{Even = 0;}
      
    }
   return Even;
}
bool IsArrayOdd(int inputVals[], int numVals) {
    bool Odd = 1;
    for (int i = 0; i < numVals; i++) {
      if (inputVals[i] % 2 != 0){}
      
      else{Odd = 0;}
    }
    
   return Odd;
}

int main(void) {
   int size, i;
   int numbers[20];
   
   scanf("%d", &size);
   
   for (i = 0; i < size; i++) {
      scanf("%d", &numbers[i]);
   }
   if (IsArrayOdd(numbers, size))
      printf("all odd\n");
   else if (IsArrayEven(numbers, size))
      printf("all even\n");
   else
      printf("not even or odd\n");
    return 0;
}

