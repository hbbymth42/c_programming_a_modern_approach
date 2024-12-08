/* Find largest and smallest of four integers */

#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4, small1, small2, large1, large2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 > num2) {
        large1 = num1;
        small1 = num2;
    } else {
        large1 = num2;
        small1 = num1;
    }

    if (num3 > num4) {
        large2 = num3;
        small2 = num4;
    } else {
        large2 = num4;
        small2 = num3;
    }

    if (large1 > large2) {
        printf("Largest: %d\n", large1);
    } else {
        printf("Largest: %d\n", large2);
    }

    if (small1 < small2) {
        printf("Smallest: %d\n", small1);
    } else {
        printf("Smallest: %d\n", small2);
    }

    return 0;
}

