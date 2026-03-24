#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void getA(){
			cout<<"enter the a=";
			cin>>a;
		}
};
class B: virtual public A{
	public:
	int b;
	void getB(){
	
	cout<<"enter the B=";
	cin>>b;
}
};
class C : virtual public A{
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
		cout<<"addition of a b c d="<<a+b+c+d;
	}
};
main(){
	D d1;
	d1.getA();
	d1.getB();
	d1.getC();
	d1.getD();
	d1.display();
}
