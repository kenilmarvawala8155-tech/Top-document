#include<iostream>
using namespace std;
class maths{
	public:
		int a;
		maths(int a){
			this->a=a;
		}
};
main(){
	maths m1(23);
	cout<<m1.a;
	maths m2(45);
	cout<<m2.a;
}
