/* Five-Digit Octal Converter */

#include <stdio.h>

int main(void)
{
    int remainder1, remainder2, remainder3, remainder4, remainder5, num;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    remainder1 = num % 8;
    num = num / 8;
    remainder2 = num % 8;
    num = num / 8;
    remainder3 = num % 8;
    num = num / 8;
    remainder4 = num % 8;
    num = num / 8;
    remainder5 = num % 8;
    num = num / 8;

    printf("In octal, your number is: %d%d%d%d%d\n", remainder5, remainder4, remainder3, remainder2, remainder1);

    return 0;
}
