/* Computes Volume of user-provided radius sphere */

#include <stdio.h>

#define PI 3.14f

int main(void) {
    float sphere, radius;
    
    printf("Enter radius: ");
    scanf("%f", &radius);

    sphere = (4.0f/3.0f) * PI * radius * radius * radius;

    printf("Volume of Sphere: %.2f\n", sphere);

    return 0;
}

