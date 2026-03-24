#include<iostream>
using namespace std;
class maths{
	public:
		int a,b;
		maths(int x=0,int y=0){
			a=x;
			b=y;
		}
		maths operator +(maths &m){
			maths m3;
			m3.a=a+m.a;
			m3.b=b+m.b;
			return m3;
		}
		
		void add(){
			cout<<"\n a="<<a<<"\t b="<<b;
		}
};
main(){
	maths m1(1,2);
	m1.add();
	maths m2(3,4);
	m2.add();
	maths m3=m1+m2;
	m3.add();
}
