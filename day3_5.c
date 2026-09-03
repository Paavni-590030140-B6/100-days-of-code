// Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert to Fahrenheit
    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    // Display result
    printf("Temperature in Fahrenheit: %.2lf\n", fahrenheit);

    return 0;
}