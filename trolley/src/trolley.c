/* Program that implements the trolley problem for the 3rd part of the assignment! */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    // Defining an exit code for the program
    // Note: The exit code is 0, if EOF was provided as input, otherwise it is 1 if input was invalid
    int exit_code = 1;

    // Infinite loop for the multiple variations of the trolley problem
    while (1) {
        
        //* Reading the input for the left path
        // Note: The integer read is a long long int to accomodate the range of -10^18 to 10^18
        long long int cost_left;

        printf("Please enter the cost of going left: ");
        int result = scanf("%lld", &cost_left);

        // Ensure that the input is not EOF, if it is, break out of the loop and set the exit code appropriately
        if (result == EOF) {
            printf("\n");
            exit_code = 0;
            break;
        }

        // Ensure that the input is a valid integer, if it is not, break out of the loop and set the exit code appropriately
        if (result != 1) {
            printf("Invalid input. Terminating.\n");
            exit_code = 1;
            break; 
        }

        // Ensure that integer cost read is within the range of -10^18 and 10^18, if it is not, break out of the loop and set the exit code appropriately
        // Note: Typically the range of long long int is -9223372036854775808 to 9223372036854775807, which is why the "LL" suffix was added to the numbers.
        if (cost_left < -1000000000000000000LL || cost_left > 1000000000000000000LL) {
            // printf("Invalid input. Please enter an integer number between -10^18 and 10^18.\n");
            printf("Invalid input. Terminating.\n");
            exit_code = 1;
            break;
        }
        
        // We want to, also, cover the case where given cost is a string of numbers, followed by some characters
        // For example, if the input is "67453hy", the program should terminate and print "Invalid input. Terminating.", with an exit code of 1
        // To do this, we need to check if the next character in the input is a non-digit character
        // Note: This check was done due to some test cases that were not already covered.
        if (getchar() != '\n') { // If the next character is not a newline character, but a character, symbol, etc.
            printf("Invalid input. Terminating.\n");
            exit_code = 1;
            break;
        }

        //* Reading the input for the right path
        long long int cost_right;

        printf("Please enter the cost of going right: ");
        result = scanf("%lld", &cost_right);

        // Ensure that the input is not EOF
        if (result == EOF) {
            printf("\n");
            exit_code = 0;
            break;
        }

        // Ensure that the input is a valid integer
        if (result != 1) {
            printf("Invalid input. Terminating.\n");
            exit_code = 1;
            break;
        }

        // Ensure that integer cost read is within the range of -10^18 and 10^18
        if (cost_right < -1000000000000000000LL || cost_right > 1000000000000000000LL) {
            // printf("Invalid input. Please enter an integer number between -10^18 and 10^18.\n");
            printf("Invalid input. Terminating.\n");
            exit_code = 1;
            break;
        }

        // Respectively, we need to ensure that the next character of the right path cost is a newline character
        if (getchar() != '\n') {
            printf("Invalid input. Terminating.\n");
            exit_code = 1;
            break;
        }


        // Determining the path with the least cost
        if (cost_left < cost_right) {
            printf("Go left.\n");
        } else if (cost_right < cost_left) {
            printf("Go right.\n");
        } else {
            printf("Go left.\n");
        }
        
    }

    return exit_code;
}
