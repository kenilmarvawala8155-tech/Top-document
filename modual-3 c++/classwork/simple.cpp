#include<iostream>
using namespace std;
class calculation{
	public:
	int a,b,c;

	calculation(int a,int b){
		
		cout<<"\nsum of a and b="<<a+b;
		cout<<"\nsub of a and b="<<a-b;
		cout<<"\nmul of a and b="<<a*b;
		cout<<"\ndiv of a and b="<<a/b;
	}
	
		
};
int main(){
           
	int a,b;
	cout<<"enter the two number=";
	cin>>a>>b;
	calculation s1(a,b);
	
	return 0;
}
