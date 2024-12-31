#include <stdio.h>

int main() {
    int seconds, hours, minutes;

    // Take input for total seconds
    printf("Enter total seconds: ");
    scanf("%d", &seconds);

    // Convert seconds to hours, minutes, and seconds
    hours = seconds / 3600;            // 1 hour = 3600 seconds
    minutes = (seconds % 3600) / 60;   // Remaining minutes
    seconds = seconds % 60;            // Remaining seconds

    // Print the result in HH:MM:SS format
    printf("Time is %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}