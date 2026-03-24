#include<iostream>
using namespace std;
class parent {
	public :
		parent(){
			cout<<"\n parent class constrctor called";
		}
		parent (int x){
			cout<<"\n x="<<x;
		}
};
class child:public parent{
	public:
		child(){
			cout<<"\n parent class constrctor called";
		}
		child(int y,int z,int x):parent(x){
			cout<<"\n in child y="<<y<<"z="<<z;
		}
};
main(){
	child c1;
	child(12,23,45);
}
