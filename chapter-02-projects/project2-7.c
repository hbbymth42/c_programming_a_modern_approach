/* Calculate smallest number of $20, $10, $5 and $1 bills required to meet entered dollar amount */

#include <stdio.h>

int main(void) {
    
    int bills20, bills10, bills5, bills1, dollar_amt;
    
    printf("Please enter whole dollar amount: ");
    scanf("%d", &dollar_amt);
    
    bills20 = dollar_amt / 20;
    dollar_amt = dollar_amt - (bills20 * 20);

    bills10 = dollar_amt / 10;
    dollar_amt = dollar_amt - (bills10 * 10);

    bills5 = dollar_amt / 5;
    dollar_amt = dollar_amt - (bills5 * 5);

    bills1 = dollar_amt / 1;
    dollar_amt = dollar_amt - (bills1 * 1);

    printf("$20 bills: %d\n", bills20);
    printf("$10 bills: %d\n", bills10);
    printf("$5 bills: %d\n", bills5);
    printf("$1 bills: %d\n", bills1);

    return 0;
}

