/* Takes in phone number from user and displays in different format */

#include <stdio.h>

int main(void) {
    int first, second, third;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &first, &second, &third);

    printf("You entered %.3d.%.3d.%.4d\n", first, second, third);

    return 0;
}

