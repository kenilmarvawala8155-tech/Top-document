#include<stdio.h>
main(){
	int num,original,rem;
	int result=0;
	printf("enter th enumber =");
	scanf("%d",&num);
	original=num;
	while(num>0){
		rem=num%10;
		result=result+(rem*rem*rem);
		num=num/10;
	}
	if(original==result){
		printf("armstrong number ");
	}else
	{
		printf("not a armstrong");
	}
}
