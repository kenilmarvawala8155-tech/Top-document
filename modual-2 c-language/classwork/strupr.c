// c program to demonstrate
// example of strupr() function.

#include<stdio.h>
#include <string.h>

int main()
{
char str[] = "CompuTer ScienCe PoRTAl fOr geeKS";

printf("Given string is: %s\n", str);

printf("\nstring after converting to the uppercase is: %s", strupr(str));
return 0;
}
