/* Calculates how many digits a number contains */

#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 0 && num < 10) {
        printf("The number has 1 digit.\n");
    } else if (num >= 10 && num < 100) {
        printf("The number has 2 digits.\n");
    } else if (num >= 100 && num < 1000) {
        printf("The number has 3 digits.\n");
    } else {
        printf("Please enter a number with less than 4 digits.\n");
    }

    return 0;
}

