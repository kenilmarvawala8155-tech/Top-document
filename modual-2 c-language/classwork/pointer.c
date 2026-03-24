#include<stdio.h>

int main() {
    int num = 10;
    int *ptr;

    ptr = &num;   // pointer stores address of num

    printf("Original value of num = %d\n", num);

    *ptr = 20;    // modifying value using pointer

    printf("Modified value of num = %d\n", num);

    return 0;
}
