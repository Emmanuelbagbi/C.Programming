#include <stdio.h>

int main() {
    float length, width, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    printf("The perimeter of the rectangle with length %.2f and width %.2f is: %.2f\n", length, width, perimeter);

    return 0;
}

