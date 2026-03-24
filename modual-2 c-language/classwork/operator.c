#include<stdio.h>
main(){
	char ope;
	double a,b,res;
	
	printf("Enter the Case: ");
	scanf("%c",&ope);
	printf("enter the a and b:");
	scanf("%lf %lf",&a,&b);
	switch(ope)
	{
		case 'A':
			res = a + b;
			printf("Addition: %.f",res);
		break;
		case 'B':
			res = a - b;
			printf("standard: %.f",res);
		break;
		case 'C':
			res = a * b;
			printf("multiplication: %.f",res);
		break;
		case 'D':
			res = a / b;
			printf("division: %.f",res);
		break;
	}
	}
	

