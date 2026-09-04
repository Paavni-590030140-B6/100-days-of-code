// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Convert to hours, minutes, and seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Display result
    printf("Time in hours:minutes:seconds format: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
