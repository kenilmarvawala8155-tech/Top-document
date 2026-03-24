#include<iostream>
using namespace std;
class maths{
	public:
		int a;
		static int x;
		maths(int a){
			this->a=a;
			maths::x++;
		}
		static void obcountprint(){
			cout<<"\n total object"<<maths::x;
		}
};
int maths::x=0;
main(){
	maths m1(23);
	cout<<m1.a;
	maths m2(45);
	cout<<"\n"<<m2.a;
	cout<<"\n"<<m1.x;
	cout<<"\n"<<m2.x;
	maths::obcountprint();
}
