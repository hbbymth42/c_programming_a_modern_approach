/* Calculates remaining loan balance after first 3 monthly payments */

#include <stdio.h>

int main(void) {
    float loan_amt, interest, monthly_pmt;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amt);

    printf("Enter interest rate: ");
    scanf("%f", &interest);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pmt);

    interest = (interest / 100.0f) / 12.0f; // Change interest to percentage & split by month

    loan_amt = loan_amt * (1.0f + interest) - monthly_pmt; // Loan Balance calculation
    
    printf("Balance remaining after first payment: %.2f\n", loan_amt);
    loan_amt = loan_amt * (1.0f + interest) - monthly_pmt; // Loan Balance calculation

    printf("Balance remaining after second payment: %.2f\n", loan_amt);
    loan_amt = loan_amt * (1.0f + interest) - monthly_pmt; // Loan Balance calculation

    printf("Balance remaining after third payment: %.2f\n", loan_amt);

    return 0;
}

