/* Translates a two-digit number to the English word for the number */

#include <stdio.h>

int main(void) {
    int num, num_tens, num_ones;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    if (num > 99 || num < 10) {
        printf("Please enter a positive two-digit number.\n");
    } else {
        num_tens = num / 10;
        num_ones = num % 10;

        switch (num) {
            case 10:
                printf("You entered the number ten\n");
                break;
            case 11:
                printf("You entered the number eleven.\n");
                break;
            case 12:
                printf("You entered the number twelve.\n");
                break;
            case 13:
                printf("You entered the number thirteen.\n");
                break;
            case 14:
                printf("You entered the number fourteen.\n");
                break;
            case 15:
                printf("You entered the number fifteen.\n");
                break;
            case 16:
                printf("You entered the number sixteen.\n");
                break;
            case 17:
                printf("You entered the number seventeen.\n");
                break;
            case 18:
                printf("You entered the number eighteen.\n");
                break;
            case 19:
                printf("You entered the number nineteen.\n");
                break;
            default:
                break;
        }
        switch (num_tens) {
            case 2:
                printf("You entered the number twenty-");
                break;
            case 3:
                printf("You entered the number thirty-");
                break;
            case 4:
                printf("You entered the number forty-");
                break;
            case 5:
                printf("You entered the number fifty-");
                break;
            case 6:
                printf("You entered the number sixty-");
                break;
            case 7:
                printf("You entered the number seventy-");
                break;
            case 8:
                printf("You entered the number eighty-");
                break;
            case 9:
                printf("You entered the number ninety-");
                break;
        }

        switch (num_ones) {
            case 1:
                printf("one.\n");
                break;
            case 2:
                printf("two.\n");
                break;
            case 3:
                printf("three.\n");
                break;
            case 4:
                printf("four.\n");
                break;
            case 5:
                printf("five.\n");
                break;
            case 6:
                printf("six.\n");
                break;
            case 7:
                printf("seven.\n");
                break;
            case 8:
                printf("eight.\n");
                break;
            case 9:
                printf("nine.\n");
                break;
        }
    }
    return 0;
}

