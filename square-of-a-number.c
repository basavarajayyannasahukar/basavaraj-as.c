#include <stdio.h>

// Function prototype
int square(int num);

int main() {
    int num, result;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the square function
    result = square(num);

    // Display the result
    printf("The square of %d is %d\n", num, result);

    return 0;
}

// Function definition
int square(int num) {
    return num * num;
}
