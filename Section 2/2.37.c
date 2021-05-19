/* 
2.37 LAB: Warm up: Variables, input, and casting
(1) Prompt the user to input an integer, a double, a character, and a string, storing each into separate variables. Then, output those four values on a single line separated by a space. (2 pts)

Note: This zyLab outputs a newline after each user-input prompt. For convenience in the examples below, the user's input value is shown on the next line, but such values don't actually appear as output when the program runs.

Enter integer:
99
Enter double:
3.77
Enter character:
z
Enter string:
Howdy
99 3.770000 z Howdy

(2) Extend to also output in reverse. (1 pt)

Enter integer:
99
Enter double:
3.77
Enter character:
z
Enter string:
Howdy
99 3.770000 z Howdy
Howdy z 3.770000 99

(3) Extend to cast the double to an integer, and output that integer. (2 pts)

Enter integer:
99
Enter double:
3.77
Enter character:
z
Enter string:
Howdy
99 3.770000 z Howdy
Howdy z 3.770000 99
3.770000 cast to an integer is 3
*/


/*----------------------------------------------------------------------------------------------------------*/
//Code Below

#include <stdio.h>

int main()

{

   int userInt;
   double userDouble;
   char userChar;
   char userString[50] = "";

   

   printf("Enter integer:\n");
   scanf("%d", &userInt);

   printf("Enter double:\n");
   scanf("%lf", &userDouble);

   printf("Enter character:\n");
   scanf(" %c", &userChar);

   printf("Enter string:\n");
   scanf("%s", userString);

   printf("%d %lf %c %s\n", userInt, userDouble, userChar, userString);
   printf("%s %c %lf %d\n", userString, userChar, userDouble, userInt);
   printf("%lf cast to an integer is %d\n", userDouble, (int)userDouble);

   return 0;

}

