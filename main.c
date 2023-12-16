#include <stdio.h>

int main() {
    // Declare variables to store the two numbers
    int num1, num2;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the product of the two numbers
    int product = num1 * num2;

    // Display the result
    printf("The product of %d and %d is: %d\n", num1, num2, product);

    return 0;
}
