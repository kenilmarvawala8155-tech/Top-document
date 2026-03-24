#include<iostream>
using namespace std;
class parent {
	public:
		virtual void area(){
			cout<<"\n parent class method";
		}
};
class rect : public parent {
	public:
		int l,b;
		void area(){
		
		cout<<"\n enter the l and b";
		cin>>l>>b;
		cout<<"\n area of rect="<<l*b;
	}
};
main(){
	rect r1;
	r1.area();
}




