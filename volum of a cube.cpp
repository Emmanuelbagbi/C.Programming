#include <stdio.h>

int main() {
    float side, volume;
    
    printf("Enter the side length of the cube: ");
    scanf("%f", &side);

    volume = side * side * side;

    printf("The volume of the cube with side length %.2f is: %.2f\n", side,volume);

    return 0;
}

