#include <stdio.h>

int main() {
    int days, years, weeks;

    // Take input for total days
    printf("Enter total number of days: ");
    scanf("%d", &days);

    // Calculate years, weeks, and remaining days
    years = days / 365;            // 1 year = 365 days (assuming no leap year)
    weeks = (days % 365) / 7;      // Remaining days after calculating years
    days = (days % 365) % 7;       // Remaining days after calculating weeks

    // Print the result
    printf("%d days = %d years, %d weeks, and %d days\n", days + years * 365 + weeks * 7, years, weeks, days);

    return 0;
}
