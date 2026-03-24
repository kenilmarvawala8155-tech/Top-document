#include<stdio.h>
	union zindez{
	int a;
	float b;
	char name[7];
	};
main(){
	union zindez z1;
	sizeof(z1);
/*	printf("\n%d",z1.a);
	printf("\t%f",z1.b);
	printf("\t%s",z1.name); */
	printf("size of %d ",sizeof(z1));
}
