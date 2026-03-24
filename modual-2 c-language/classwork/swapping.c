#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);   // corrected &b

    // Swapping
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping: a = %d and b = %d\n", a, b);

    return 0;
}
