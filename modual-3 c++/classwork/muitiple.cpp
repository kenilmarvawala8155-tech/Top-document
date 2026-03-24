#include<iostream>
using namespace std;
class B{
	public:
	int b;
	void getB(){
	
	cout<<"enter the B=";
	cin>>b;
}
};
class C {
	public:
	int c;
	void getC(){
	
	cout<<"enter the C=";
	cin>>c;
}
};
class D:public C,public B{
	public:
	int d;
	void getD(){
	
	cout<<"enter the D=";
	cin>>d;
}
	void display(){
		cout<<"addition of b c d="<<b+c+d;
	}
};
main(){
	D d1;
	d1.getB();
	d1.getC();
	d1.getD();
	d1.display();
}
