#include<stdio.h>
main(){
	int num;
	printf("enter the num:");
	scanf("%d",&num);
	if(num %2==0){
		printf("even number");
	}else{
		printf("odd number");
	}
	if(num > 0){
		printf("\n positive number");
	}else if(num<0){
		printf("\n negitive number");
	}else{
		printf("\n zero number");
	}
	if( num % 3==0 && num % 5==0 ){
		printf(" \n the number is multiply is 3 and 5");
	}else{
		printf(" \n the number is multiply is not 3 and 5");
	}
}
