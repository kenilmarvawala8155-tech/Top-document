#include<iostream>
using namespace std;
class maths{
	public:
	int a,b,c,d;
	maths(){
		a=1;
		b=2;
		c=3;
		d=4;
	}
	maths(int x,int y)
	{
		a=x;
		b=y;
	}
};
main(){
	maths m1;
	maths *m2 = new maths(12,34);
	cout<<"\n sizeof m1="<<sizeof(m1);
	cout<<"\n sizeof m1="<<sizeof(m2);
}
