#include<iostream>
using namespace std;
class user{
	public :
		// data member
		int pid; 
		char name[20];
		int price;
        string descriptive;
	
		void getuserinfo(){
			cout<<"enter the pid name price and descriptive ";
			cin>>pid>>name>>price>>descriptive;
		}
		void showgetinfo(){
			cout<<"\n product id="<<pid;
			cout<<"\n name="<<name;
			cout<<"\n price="<<price;
			cout<<"\n descriptive="<<descriptive;
			}
			
};
main(){
	user u1;
	u1.getuserinfo();
	u1.showgetinfo();
}

