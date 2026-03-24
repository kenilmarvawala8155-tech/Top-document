#include <stdio.h>
main() {
    int a, b;
    // Taking input from user
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    // Arithmetic Operations
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    if (b != 0) {
        printf("Division: %d\n", a / b);
        printf("Modulus: %d\n", a % b);
    } else {
        printf("Division and Modulus not possible (division by zero)\n");
    }
    // Relational Operations
    printf("\n--- Relational Operations ---\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n", a <= b);
    // Logical Operations
    printf("\n--- Logical Operations ---\n");
    printf("(a > 0 && b > 0) : %d\n", (a > 0 && b > 0));
    printf("(a > 0 || b > 0) : %d\n", (a > 0 || b > 0));
    printf("!(a > 0) : %d\n", !(a > 0));
}
