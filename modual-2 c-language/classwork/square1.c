#include <stdio.h>

int main() {

    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("\nSquare of %d = %d", num, num * num);
    }
    else {
    	printf("not squred");
	}

    return 0;
}
