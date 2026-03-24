#include<stdio.h>
main(){
	int i=100,n;
	int fact;
	printf("enter tne number =");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("%d",fact);
}
