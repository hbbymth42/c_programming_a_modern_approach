/* Check which date comes earlier in calendar */

#include <stdio.h>

int main(void) {
    int month1, day1, year1, month2, day2, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 < year2) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1, year1, month2, day2, year2);
    } else if (year1 == year2) {
        if (month1 < month2) {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1, year1, month2, day2, year2);
        } else if (month1 == month2) {
            if(day1 < day2) {
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1, year1, month2, day2, year2);
            } else if (day1 == day2) {
                printf("%.2d/%.2d/%.2d is the same as %.2d/%.2d/%.2d\n", month1, day1, year1, month2, day2, year2);
            } else {
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2, month1, day1, year1);
            }
        } else {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2, month1, day1, year1);
        }
    } else {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2, month1, day1, year1);
    }

    return 0;
}

