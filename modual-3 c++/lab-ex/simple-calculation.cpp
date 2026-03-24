#include<iostream>
using namespace std;
class calculation{
	public:
	int a,b,c;

	void diplay(int a,int b){
		
		cout<<"\nsum of a and b="<<a+b;
		cout<<"\nsub of a and b="<<a-b;
		cout<<"\nmul of a and b="<<a*b;
		cout<<"\ndiv of a and b="<<a/b;
	}
	
		
};
int main(){
	
	calculation s1;
	s1.diplay(100,50);
	return 0;
}
