/******************
Name: Tom Yaeger
ID: 216082867
Assignment: ex1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
    //1. What bit
    //Create two variables, ask the user to input 2 integers (number and position):
    int num, pos;
    printf("What bit:\n");
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
    printf("The bit in position %d of number %d is: %d\n", pos, num, bitAtPosition);


    //2. Set bit

    //Scan two integers (representing number and position)
    printf("\nSet bit:\n");
    printf("Please enter a number:\n");
    scanf("%d", &num);
    printf("Please enter a position:\n");
    scanf("%d", &pos);
    //Find the bit at position 'pos' (see explanation above)
    bitAtPosition = (num >> pos) & 1;

    /*I used XOR to determine whether bit in position 'pos' needs to be turned on or off.
     * If bitAtPosition is 1, then (bitAtPosition ^ 1) will be 0,
     * so that the bit won't be negated, but will stay 1.
     *
     * If bitAtPosition is 0, then (bitAtPosition ^ 0) will be 0, else if it is 1 then (bitAtPosition ^ 0) will be equal to 1.
     * Meaning that the bit will be negated if it is 1, otherwise it will remain 0.
    */
    int bitOn = num + ((bitAtPosition ^ 1)<<pos);
    int bitOff = num - ((bitAtPosition ^ 0)<<pos);
    //Print the output:
    printf("Number with bit %d set to 1: %d\n", pos, bitOn);
    printf("Number with bit %d set to 0: %d\n", pos, bitOff);



    //3. Toggle bit
    printf("\nToggle bit:\n");
    //Scan two integers (representing number and a position)
    printf("Please enter a number:\n");
    scanf("%d", &num);
    printf("Please enter a position:\n");
    scanf("%d", &pos);
    /*Toggle the bit in this position
    Print the new number */
    int numToggled = num & (~0 - (1<<pos));
    printf("Number with bit %d toggled: %d\n", pos, numToggled);

    // Even - Odd
    //printf("\nEven - Odd:\n");
    /* Scan an integer
    If the number is even - print 1, else - print 0. */

    // 3, 5, 7, 11
    //printf("\n3, 5, 7, 11:\n");
    /* Scan two integers in octal base
    sum them up and print the result in hexadecimal base
    Print only 4 bits, in positions: 3,5,7,11 in the result. */

    printf("Bye!\n");
    return 0;
}
