#include<stdio.h>
 main() {
    int a[3][3], i, j, sum = 0;

    printf("Enter 9 elements for 3x3 matrix:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
     printf("Sum of all elements = %d", sum);
}
