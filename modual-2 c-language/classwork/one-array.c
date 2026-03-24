#include<stdio.h>
main() {
    int arr[5], i;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The numbers are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
}
