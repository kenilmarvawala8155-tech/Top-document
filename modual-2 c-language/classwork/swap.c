#include<stdio.h>
main(){
	int a,b,temp;
	printf("enter the two number=");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n a=%d and b=%d",a,b);
}
