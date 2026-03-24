#include <stdio.h>
#include <string.h>

int main() {
  
    char s1[] = "hello geeks!";
    char s2[20] = "gfg";
    char s3[40];

    // Copy contents of s1 to s2 using strcpy
    strcpy(s1, s2);

    // Copy a constant string into s3
    strcpy(s3, "Copy successful");
    printf("s1: %s\n", s1);
  	printf("s2: %s\n", s2);
  	printf("s3: %s", s3);
  	
    return 0;
}
