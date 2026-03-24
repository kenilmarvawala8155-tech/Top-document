#include <string.h>
#include <stdio.h>
int main(){
    char* s1 = "Geeks";
    char* s2 = "Geeks";

    // Printing the return value of the strcmp()
    printf("%d", strcmp(s1, s2));

    return 0;
}
