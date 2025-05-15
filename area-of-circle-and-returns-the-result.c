#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846  // Define the value of Pi

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate and display the area
    printf("The area of the circle is: %.5lf\n", calculateArea(radius));

    return 0;
}
