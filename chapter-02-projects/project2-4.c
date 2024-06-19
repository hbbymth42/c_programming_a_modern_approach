/* Calculates user-provided amount with 5% tax added */

#include <stdio.h>

int main(void) {
    float amount, amount_tax;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    amount_tax = amount * (1+0.05f);

    printf("With tax added: $%.2f\n", amount_tax);

    return 0;
}

