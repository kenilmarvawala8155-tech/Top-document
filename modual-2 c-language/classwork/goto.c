#include <stdio.h>

int main() {
    int num;

start:  // label
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if(num <= 0) {
        printf("Invalid input! Try again.\n");
        goto start;  // jump back to start
    }

    printf("You entered: %d\n", num);

    return 0;
}
