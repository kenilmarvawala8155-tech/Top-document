#include<stdio.h>
main(){
	int num,original,rem;
	int rev=0;
	printf("enter th enumber =");
	scanf("%d",&num);
	original=num;
	while(num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(original==rev){
		printf("palidromnumber ");
	}else
	{
		printf("palidromnumber");
	}
}
