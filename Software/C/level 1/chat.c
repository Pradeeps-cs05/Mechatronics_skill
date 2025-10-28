#include <stdio.h>

int main() {
    int number, sum = 0, remainder;

    printf("Enter a whole number: ");
    scanf("%d", &number);

    // Handle negative numbers by converting them to positive for digit extraction
    int tempNumber = (number < 0) ? -number : number;

    while (tempNumber > 0) {
        remainder = tempNumber % 10; // Get the last digit
        sum += remainder;            // Add the digit to the sum
        tempNumber /= 10;            // Remove the last digit from the number
    }

    printf("The sum of the digits of %d is: %d\n", number, sum);

    return 0;
}