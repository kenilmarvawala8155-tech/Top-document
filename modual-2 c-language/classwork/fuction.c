#include<stdio.h>

void display();
void add(int a,int b,int c){
	c=a+b;
	printf("sum =%d",c);
}
float areacircle(int a);

main(){
	display();
	add(23,45);
	float area =areacircle(3);
	printf("\n area of circle=%f",area);
}
