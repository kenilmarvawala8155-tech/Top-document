#include<stdio.h>
main(){
	int i,j;
	for(i=1;i<=10;i--){
		printf("\n i=%d",i);
		
	}
}

#include<stdio.h>
void main(){
	int num,rem,rev=0;
	printf("\n enter the num");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		printf("\n rem =%d",rem);
		num=rev*10+rem;
		printf("\n rev =%d",rev);
	}
	printf("\n rem =%d",rev);
}
