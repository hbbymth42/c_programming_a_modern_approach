/* Calculates value of following polynomial using Horner's Rule: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 */

#include <stdio.h>

int main(void) {
    float x, result;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    result = ((((3*x+2)*x-5)*x-1)*x+7)*x - 6;

    printf("Computed Result: %.2f\n", result);

    return 0;
}

