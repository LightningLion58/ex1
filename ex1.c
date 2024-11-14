/******************
Name: Tom Yaeger
ID: 216082867
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  //Create two variables, ask the user to input 2 integers (number and position):
  int num, pos;
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &pos);

  /*
   * Now, in order to get the bit in position 'pos',
   * we need to shift the bit 'pos' times to the right,
   * so that the bit in position 'pos' will now be the first bit of the integer.
   *
   * After having shifted the bit 'pos' times to the right, we need to turn off
   * all the other bits so that we get only the bit in position 'pos'.
   * I used the "and" (&) bitwise operator to keep just the first bit on.
   * It works because by doing (someInteger) & 1, the only bit that is turned on in the number 1 is the LSB
   */
  int bitAtPosition = (num >> pos) & 1;
  printf("The bit in position %d of number %d is: %d", pos, num, bitAtPosition);


  // Set bit
  //printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  // Toggle bit
  //printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */

  // Even - Odd
  //printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */

  // 3, 5, 7, 11
  //printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  //printf("Bye!\n");
  return 0;
}
