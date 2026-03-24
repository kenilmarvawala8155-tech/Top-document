#include<stdio.h>
void display(){
	printf("hello word");
}
void add(int a,int b)
{
	printf("\nAddition of %d and %d = %d",a,b,a+b);
}
float areacircle(int a);
int main()
{
	display();
	add(10,20);
	float area=areacircle(3);
	printf("\n area of circle=%f",area);
	return 0;
}
