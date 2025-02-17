#include <stdio.h>

int main() {
    float a;
    scanf("%f", &a);    // Corrected format specifier
    printf("You entered: %.2f", a);  // Prints with 2 decimal places
    return 0;
}
