#include<iostream>
using namespace std;
class maths {
	public:
		int a,b;
		//simple (default)constructor
		maths(){
			cout<<"\n default constructor";
		}
		// parameter constructor
		maths(int x,int y){
			a=x;
			b=y;
		}
		//copy
		maths(const maths &m3){
			a=m3.a;
			b=m3.b;
		}
		void display(){
			cout<<"\n a="<<a<<"\t b= "<<b;
		}
};
main(){
	maths m1;
	maths m2(100,300);
	m2.display();
	maths m3(90,78);
	m3.display();
	maths m4=m3;
	m4.display();
}
