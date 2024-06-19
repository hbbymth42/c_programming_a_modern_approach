/* Computes Volume of 10-metre radius sphere */

#include <stdio.h>

#define PI 3.14f

int main(void) {
    float sphere;

    sphere = (4.0f/3.0f) * PI * 10.0f * 10.0f * 10.0f;

    printf("Volume of Sphere: %.2f\n", sphere);

    return 0;
}

