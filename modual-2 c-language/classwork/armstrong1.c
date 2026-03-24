#include <stdio.h>
int main() {
    int num, original, rem;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0) {
        rem = num % 10;           // get last digit
        result = result + (rem * rem * rem); // cube and add
        num = num / 10;           // remove last digit
    }

    if(original == result)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
