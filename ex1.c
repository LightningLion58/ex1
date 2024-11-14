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
    //Toggle the bit in this position
    int numToggled = num ^ (1<<pos);
    //Print the new number
    printf("Number with bit %d toggled: %d\n", pos, numToggled);

    //4.  Even - Odd
    printf("\nEven - Odd:\n");
    //Scan an integer
    printf("Please enter a number:\n");
    scanf("%d", &num);
    /*
     * Get the first bit from the right (by doing num&1 ),
     * check if it is different from 1 (using the xor bitwise operator).
     * Basically we are negating the first bit. 1 to 0, 0 to 1.
     * Because if the first bit is 1, the number is odd (meaning we should print 0),
     * if it is 0, the number is even (meaning we should print 1).
     */
    int isEven = (num&1) ^ 1;
    //Print the result.
    printf("%d\n", isEven);
    //5. 3, 5, 7, 11
    printf("\n3, 5, 7, 11:\n");
    // Scan two integers in octal base
    int num2;
    printf("Please enter the first number (octal):\n");
    scanf("%o", &num);
    printf("Please enter the second number (octal):\n");
    scanf("%o", &num2);
    //Sum them up and print the result in hexadecimal base
    int sum = num + num2;
    printf("The sum in hexadecimal: %X\n", sum);
    //Print only 4 bits, in positions: 3,5,7,11 in the result.

    printf("The 3,5,7,11 bits are: %d%d%d%d\n", (sum>>3) & 1,(sum>>5) & 1, (sum>>7) & 1, (sum>>11) & 1);


    printf("Bye!\n");
    return 0;
}
