/* Calculates closest departure time */

#include <stdio.h>

#define TIME_1 480 // Arrival: 10:16 a.m.
#define TIME_2 583 // Arrival: 11:52 a.m.
#define TIME_3 679 // Arrival: 1:31 p.m.
#define TIME_4 767 // Arrival: 3:00 p.m.
#define TIME_5 840 // Arrival: 4:08 p.m.
#define TIME_6 945 // Arrival: 5:55 p.m.
#define TIME_7 1140 // Arrival: 9:20 p.m.
#define TIME_8 1305 // Arrival: 11:50 p.m.

int main(void) {
    int hours, minutes, time, delta1, delta2;
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);

    time = hours * 60 + minutes;

    if (time < TIME_1) {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    } else if (time >= TIME_1 && time < TIME_2) {
        delta1 = time - TIME_1;
        delta2 = (time - TIME_2) * -1;
        if (delta1 < delta2) {
            printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
        } else {
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
        }
    } else if (time >= TIME_2 && time < TIME_3) {
        delta1 = time - TIME_2;
        delta2 = (time - TIME_3) * -1;
        if (delta1 < delta2) {
            printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
        } else {
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
        }
    } else if (time >= TIME_3 && time < TIME_4) {
        delta1 = time - TIME_3;
        delta2 = (time - TIME_4) * -1;
        if (delta1 < delta2) {
            printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
        } else {
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
        }
    } else if (time >= TIME_4 && time < TIME_5) {
        delta1 = time - TIME_4;
        delta2 = (time - TIME_5) * -1;
        if (delta1 < delta2) {
            printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
        } else {
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
        }
    } else if (time >= TIME_5 && time < TIME_6) {
        delta1 = time - TIME_5;
        delta2 = (time - TIME_6) * -1;
        if (delta1 < delta2) {
            printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
        } else {
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
        }
    } else if (time >= TIME_6 && time < TIME_7) {
        delta1 = time - TIME_6;
        delta2 = (time - TIME_7) * -1;
        if (delta1 < delta2) {
            printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
        } else {
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
        }
    } else if (time >= TIME_7 && time < TIME_8) {
        delta1 = time - TIME_7;
        delta2 = (time - TIME_8) * -1;
        if (delta1 < delta2) {
            printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
        } else {
            printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
        }
    } else {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}

