#include <stdio.h>

int main() {
    int number;
    
    printf("Enter the number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number %d is positive.\n", number);
    } else if (number < 0) {
        printf("The number %d is negative.\n", number);
    } else {
        printf("The number %d is neither positive nor negative, it's zero.\n", number);
    }

    return 0;
}

