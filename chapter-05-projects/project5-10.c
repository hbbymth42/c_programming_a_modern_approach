/* Convert numerical grade to letter grade */

#include <stdio.h>

int main(void) {
    int grade, grade_tens;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100 || grade < 0) {
        printf("Please enter a valid numerical grade.\n");
    } else {
        grade_tens = grade / 10;

        switch (grade_tens) {
            case 10: case 9:
                printf("Letter grade: A\n");
                break;
            case 8:
                printf("Letter grade: B\n");
                break;
            case 7:
                printf("Letter grade: C\n");
                break;
            case 6:
                printf("Letter grade: D\n");
                break;
            default:
                printf("Letter grade: F\n");
                break;
        }
    }

    return 0;
}

