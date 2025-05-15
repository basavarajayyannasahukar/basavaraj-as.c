#include <stdio.h>

// Function declaration
int add(int a, int b);

int main() {
    int num1, num2, result;

    // Prompt user for input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call add function and store the result
    result = add(num1, num2);

    // Display the sum
    printf("Sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
