#include<iostream>
using namespace std;
class area{
	public:
		float r;
		float pi;
		area(){
			cout<<"enter r=";
			cin>>r;
		}
		void findarea(){
			pi=3.14;
			float i=pi*r*r;
			cout<<"\n area of circle="<<i;
		}
};
main(){
	area s1;
	s1.findarea();
}
