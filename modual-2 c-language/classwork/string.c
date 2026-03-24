#include<stdio.h>
#include<string.h>

main() {
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    strcat(str1, str2);   // concatenate str2 to str1

    printf("Concatenated String = %s\n", str1);
    printf("Length of String = %lu", strlen(str1));

}
