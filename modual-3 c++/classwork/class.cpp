#include<iostream>
using namespace std;
class user{
	public :
		// data member 
		char name[20];
		char email[30];
		int contact;
	
		//member function
		void getuserinfo(){
			cout<<"enter the name email and contact";
			cin>>contact>>name>>email;
		}
		void showgetinfo(){
			cout<<"\n name"<<name;
			cout<<"\n email"<<email;
			cout<<"\n contact"<<contact;
			}
			
};
main(){
	user u1;
	u1.getuserinfo();
	u1.showgetinfo();
}

