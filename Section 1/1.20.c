/*
1.20 LAB: Warm up: Basic output with variables
This zyLab activity prepares a student for a full programming assignment. Warm up exercises are typically simpler and worth fewer points than a full programming assignment, and are well-suited for an in-person scheduled lab meeting or as self-practice.


A variable like userNum can store a value like an integer. Extend the given program as indicated.

Output the user's input. (2 pts)
Output the input squared and cubed. Hint: Compute squared as userNum * userNum. (2 pts)
Get a second user input into userNum2, and output the sum and product. (1 pt)

Note: This zyLab outputs a newline after each user-input prompt. For convenience in the examples below, the user's input value is shown on the next line, but such values don't actually appear as output when the program runs.

Enter integer:
4
You entered: 4
4 squared is 16 
And 4 cubed is 64!!
Enter another integer:
5
4 + 5 is 9
4 * 5 is 20
*/

/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int main(void) {
   int userNum;
   int userNum2;
   
   printf("Enter integer:\n");
   scanf("%d", &userNum);
   printf("You entered: %d\n", userNum);
   printf("%d squared is %d\n", userNum, userNum * userNum);
   printf("And %d cubed is %d!!\n", userNum, userNum * userNum * userNum);
   printf("Enter another integer:\n");
   scanf("%d\n", &userNum2);
   printf("%d + %d is %d\n",userNum,userNum2,userNum + userNum2);
   printf("%d * %d is %d\n",userNum,userNum2,userNum * userNum2);

  

   return 0;
}
