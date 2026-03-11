#include <stdio.h>
int main(void) {
 int sum=0;
int num=100;
 int rem=0;
    while (num != 0) {
        // Extract the last digit using the modulo operator (%)
        rem = num % 10;

        // Add the extracted digit to the sum
        sum = sum + rem; // Can also use shorthand: sum += rem;

        // Remove the last digit by dividing the number by 10 (integer division)
        num = num / 10;
    }

    // Print the final sum of the digits
    printf("Sum of digits of the number is %d\n", sum);

    return 0;
}
