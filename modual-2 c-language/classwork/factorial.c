#include<stdio.h>
main(){
	int i=100,n;
	long long fact=1;
	printf("enter the number =");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("factorial=%lld",fact);
}
