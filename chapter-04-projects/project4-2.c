/* Reverse a three-digit number */

#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter a three-digit number: ");
    scanf("%d", &num1);
    num2 = num1 / 10;

    printf("The reversal is %d%d%d\n", num1 % 10, num2 % 10, num2 / 10);

    return 0;
}
