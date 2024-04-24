#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * pow(radius, 2);

    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}

