#include<iostream>
using namespace std;
class maths{
	public:
		void add(int a,int b){
			int c=a+b;
			cout<<"\n sum="<<c;
		}
		
		void add(float x,float y,float z){
			float ans=x+y+z;
			cout<<"\nsum="<<ans;
		}
};
main(){
	maths m1;
	m1.add(23,45);
	maths m2;
	m2.add(2,4,6);
}
